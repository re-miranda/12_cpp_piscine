#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    while (--argc && *++argv)
        ScalarConverter::convert(*argv);
    return (0);
}
