#include "BitcoinExchange.hpp"
#include <exception>
#include <string>

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
	std::string	line;

	while (std::getline(this->_file_csv, line))
		std::cout << line << std::endl;
}
void	BitcoinExchange::getValue( atd::string key_value )
{}
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
