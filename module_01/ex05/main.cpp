#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " {LEVEL}" << std::endl;
        return (1);
    }
    Harl    harlzinho;
    harlzinho.complain(argv[1]);
    return (0);
}

