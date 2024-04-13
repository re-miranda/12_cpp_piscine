#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <iomanip>

class  ScalarConverter
{
    public:
        static void convert( std::string literal );

    private:
         ScalarConverter( void );
         ScalarConverter(  ScalarConverter const &other );
         virtual ScalarConverter    &operator=(  ScalarConverter const &other ) const;
         virtual ~ScalarConverter( void );
};

#endif
