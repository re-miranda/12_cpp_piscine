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
void	BitcoinExchange::getValue( std::string key_value )
{
	std::map<std::string, std::string>::iterator	it;
	std::stringstream	output;
	
	it = this->_map.find(key_value);
	if (it == this->_map.end())
	{
		it = this->_map.begin();
		for ( size_t ix = 0; ix < this->_size; ++ix)
			if (key_value > it->first)
				++it;
		while (key_value > it->first)
			++it;
		if (this->_map.begin() != it)
			--it;
	}
	output << it->first << " : " << it->second;
	this->_cout(output.str());
	return ;
}
// template <typename T>
// void	BitcoinExchange::getValueRange(T	const & start, T const & end)
// {
// 	T	it;

// 	it = start;
// 	while (it != end)
// 	{
// 		this->getValue(*it);
// 		++it;
// 	}
// 	return ;
// }
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
