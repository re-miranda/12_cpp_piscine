#include "ScalarConverter.hpp"

void    ScalarConverter::convert( std::string literal )
{
    long int lint_value;
    long double ldouble_value;

    std::cout << "input( " << literal << " )" << std::endl;

    // removes trailing f
    if (literal[literal.length() - 1] == 'f'
            && literal.length() > 1 && literal[literal.length() - 2] != 'n')
        literal.erase(literal.length() - 1, 1);

    // convertion of string to long double
    if (literal == "-inf")
        ldouble_value = std::numeric_limits<double>::infinity();
    else if (literal.length() == 1 && std::isalpha(literal[0]))
        ldouble_value = static_cast<long int>(literal[0]);
    else
        ldouble_value = std::strtold(literal.c_str(), NULL);
    lint_value = static_cast<long int>(ldouble_value);

    // char
    if (lint_value >= std::numeric_limits<char>::min()
            && lint_value <= std::numeric_limits<char>::max()
            && std::isprint(static_cast<char>(lint_value)))
        std::cout << "char: " << static_cast<char>(lint_value) << std::endl;
    else
        std::cout << "char: non displayable" << std::endl;

    // int
    if (lint_value >= std::numeric_limits<int>::min() && lint_value <= std::numeric_limits<int>::max())
        std::cout << "int: " << static_cast<int>(lint_value) << std::endl;
    else
        std::cout << "int: non displayable" << std::endl;

    // float
    if ((ldouble_value >= std::numeric_limits<float>::min() && ldouble_value <= std::numeric_limits<float>::max())
            || ldouble_value != ldouble_value || ldouble_value == std::numeric_limits<float>::infinity())
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(ldouble_value) << "f" << std::endl;
    else
        std::cout << "float: non displayable" << std::endl;

    // double
    if ((ldouble_value >= std::numeric_limits<double>::min() && ldouble_value <= std::numeric_limits<double>::max())
            || ldouble_value != ldouble_value || ldouble_value == std::numeric_limits<double>::infinity())
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(ldouble_value) << std::endl;
    else
        std::cout << "double: non displayable" << std::endl;
    std::cout << std::endl;

    return ;
}
