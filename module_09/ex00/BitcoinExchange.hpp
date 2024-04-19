#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <sstream>

class BitcoinExchange
{
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const & other );
		~BitcoinExchange( void );
		BitcoinExchange &   operator=( BitcoinExchange const & other );
		
		void	open( std::string const & path );
		void	print( void );

	private:
		std::basic_ifstream<char>	_file_csv;
};

std::ostream	&operator<<(std::ostream & o, BitcoinExchange & exchange);

#endif
