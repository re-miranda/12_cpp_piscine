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
		void	printData( void );
		void	getValue( atd::string key_value );
		template <typename T>
		void	getValueRange(T	const & start, T const & end);

	private:
		std::basic_ifstream<char>	_file_csv;

		void	_cout(std::string str);
		bool	_assert_data_is_valid( void );
		void	_load_data( void );
};

std::ostream	&operator<<(std::ostream & o, BitcoinExchange & exchange);

#endif
