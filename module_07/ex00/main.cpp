#include <iostream>
#include "whatever.hpp"

int main( void )
{
    {
        char    A = 'A';
        char    B = 'B';

        std::cout << std::endl << "swap test <<<<<<" << std::endl;
        swap<char>(A, B);
        std::cout << "value of A: " << A << std::endl;
        std::cout << "value of B: " << B << std::endl;

        std::cout << std::endl << "min test <<<<<<" << std::endl;
        std::cout << "value of min: " << min<char>(A, B) << std::endl;

        std::cout << std::endl << "max test <<<<<<" << std::endl;
        std::cout << "value of max: " << max<char>(A, B) << std::endl;
    }
    {
        int A = 24;
        int B = 42;

        std::cout << std::endl << "swap test <<<<<<" << std::endl;
        swap<int>(A, B);
        std::cout << "value of A: " << A << std::endl;
        std::cout << "value of B: " << B << std::endl;

        std::cout << std::endl << "min test <<<<<<" << std::endl;
        std::cout << "value of min: " << min<int>(A, B) << std::endl;

        std::cout << std::endl << "max test <<<<<<" << std::endl;
        std::cout << "value of max: " << max<int>(A, B) << std::endl;
    }
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    return (0);
}
