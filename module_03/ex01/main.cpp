#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
    std::cout << std::endl << "claptrap for reference:" << std::endl;
    {
        ClapTrap    clap;
        clap.attack ("test");
        clap.display();
    }
    std::cout << std::endl << "scavtrap for reference:" << std::endl;
    {
        ScavTrap    scav("renato");
        scav.attack("test");
        scav.guardGate();
        scav.display();
    }
    return (0);
}
