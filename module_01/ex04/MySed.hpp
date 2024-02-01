#ifndef MY_SED_HPP
# define MY_SED_HPP

# include <iostream>
# include <fstream>

class MySed {
    public:
        ~MySed( void );
        MySed( std::string filename, std::string s1, std::string s2 );

    private:
        void    my_replace( std::string &line, size_t pos, std::string s1, std::string s2);

};

#endif

