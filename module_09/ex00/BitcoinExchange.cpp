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
	this->_file_csv.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	try {
		this->_file_csv.open(path.c_str(), std::ifstream::in);
		std::cout <<  "Sucessfully opened data.csv" << std::endl;
	} catch (std::exception const & e) {
		std::stringstream ss;
		ss << "Could not open data.csv: " << e.what();
		throw std::runtime_error(ss.str());
	}
	return ;
}
void	BitcoinExchange::print( void )
{
	while (!this->_file_csv.eof())
	{
		std::cout << this->_file_csv;
	}
}
BitcoinExchange::~BitcoinExchange( void )
{
	this->_file_csv.close();
	return ;
}
std::ostream	&operator<<(std::ostream & o, BitcoinExchange & exchange)
{
	(void)exchange;
	return (o);
}
