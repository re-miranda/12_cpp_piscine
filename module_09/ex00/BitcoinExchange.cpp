#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{
	return ;
}
BitcoinExchange::BitcoinExchange( BitcoinExchange const & other )
{
	(void)other;
	return ;
}
BitcoinExchange &   BitcoinExchange::operator=( BitcoinExchange const & other )
{
	(void)other;
	return (*this);
}
void	BitcoinExchange::open( std::string const & path )
{
	this->_file_csv.open(path.c_str(), std::ifstream::in);
	if (this->_file_csv.fail())
		throw std::runtime_error("Could not open data.csv");
	if (!_assert_data_is_valid())
		throw std::runtime_error("Could not validate data.csv");
	this->_cout("Sucessfully opened data.csv");
	this->_load_data();
	return ;
}
void	BitcoinExchange::printData( void )
{
	std::map<std::string, std::string>::iterator mix;
	
	mix = this->_map.begin();
	for ( size_t ix = 0; ix < this->_size; ++ix)
		std::cout << (mix)->first << " : " << (mix++)->second << std::endl;
	return ;
}
int	BitcoinExchange::_load_data( void )
{
	std::string	line;
	std::string	t1;
	std::string	t2;
	size_t	separetor_pos;

	this->_size = 0;
	while (std::getline(this->_file_csv, line))
	{
		separetor_pos = line.find((','));
		t1 = line.substr(0, separetor_pos);
		t2 = line.substr(separetor_pos + 1, std::distance(line.begin(), line.end()));
		this->_map[t1] = t2;
		++this->_size;
	}
	return (0);
}
void	BitcoinExchange::getValue( std::string input )
{
	std::map<std::string, std::string>::iterator	it;
	std::string			key;
	float				amount;
	size_t				separator_pos;
	std::stringstream	output;

	separator_pos = input.find(" | ");
	if (separator_pos == std::string::npos)
	{
		output << "Error: bad input => " << input;
		this->_cout(output.str());
		return ;
	}
	key = input;
	key = input.substr(0, separator_pos);
	amount = std::atof(input.substr(separator_pos + 3, input.length()).c_str());
	if (amount < 0)
		output << "Error: not a positive number.";
	else if (amount > 1000)
		output << "Error: too large a number.";
	else
	{
		it = this->_find_closest_pair(key);
		output << key << " => " << amount << " = " << amount * std::atof(it->second.c_str());
	}
	this->_cout(output.str());
	return ;
}
std::map<std::string, std::string>::iterator	BitcoinExchange::_find_closest_pair(std::string key)
{
	std::map<std::string, std::string>::iterator	it;

	it = this->_map.find(key);
	if (it == this->_map.end())
	{
		it = this->_map.begin();
		for ( size_t ix = 0; ix < this->_size; ++ix)
			if (key > it->first)
				++it;
		while (key > it->first)
			++it;
		if (this->_map.begin() != it)
			--it;
	}
	return (it);
}
void	BitcoinExchange::_cout(std::string str)
{
	std::cout << "[BitcoinExchange] " << str << std::endl;
	return ;
}
bool	BitcoinExchange::_assert_data_is_valid( void )
{
	std::string	line;

	std::getline(this->_file_csv, line);
	if (line.compare("date,exchange_rate"))
		return (false);
	return (true);
}
BitcoinExchange::~BitcoinExchange( void )
{
	if (this->_file_csv.is_open())
	{
		this->_file_csv.close();
		this->_cout("Closed data.csv");
	}
	return ;
}
std::ostream	&operator<<(std::ostream & o, BitcoinExchange & exchange)
{
	(void)exchange;
	return (o);
}
