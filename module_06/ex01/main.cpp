#include <iostream>
#include "Serializer.hpp"

int main( void )
{
    Data        *A;
    uintptr_t   B;
    Data        Data;

    A = &Data;
    A->setInt(42);

    std::cout << "Data * Before: " << A;
    B = Serializer::serialize(A);
    A = Serializer::deserialize(B);
    std::cout << " And after: " << A << std::endl;

    std::cout << "uintptr_t Before: " << B;
    B = Serializer::serialize(A);
    std::cout << " And after: " << B << std::endl;

    std::cout << A->getInt() << std::endl;

    return (0);
}
