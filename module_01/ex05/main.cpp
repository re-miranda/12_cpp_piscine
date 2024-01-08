#include "Harl.class.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cout << "Usage: ./" << argv[0] << " {LEVEL}" << std::endl);
    Harl    harlzinho;
    harlzinho.complain("hello");
    return (0);
}

