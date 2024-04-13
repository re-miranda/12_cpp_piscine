#include <iostream>
#include "iter.hpp"

template <typename T>
void    ascending_count( T & X )
{
    static T    count;

    X = count;
    count++;
    return ;
}

template <typename T>
void    print( T const & X )
{
    std::cout << X << ", ";
    return ;
}

int main( void )
{
    int amount = 5;
    int *int_array = new int [amount];

    iter(int_array, amount, ascending_count<int>);
    iter(int_array, amount, print<int>);
    std::cout << std::endl;
    delete[] int_array;
    return (0);
}
