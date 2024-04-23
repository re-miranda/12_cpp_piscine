#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <cstdlib>
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
		void	printData( void );
		void	getValue( std::string key_value );

	private:
		std::basic_ifstream<char>			_file_csv;
		size_t								_size;
		std::map<std::string, std::string>	_map;

		void	_cout(std::string str);
		bool	_assert_data_is_valid( void );
		int		_load_data( void );
		std::map<std::string, std::string>::iterator	_find_closest_pair(std::string key);
};

std::ostream	&operator<<(std::ostream & o, BitcoinExchange & exchange);

#endif
