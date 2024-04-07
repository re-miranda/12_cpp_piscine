#include "FragTrap.hpp"
#include "Claptrap.hpp"

int main(void) {
    std::cout << std::endl << "claptrap for reference:" << std::endl;
    {
        ClapTrap    clap;
        clap.attack ("test");
        clap.display();
    }
    std::cout << std::endl << "fragtrap for reference:" << std::endl;
    {
        FragTrap    frag("renato");
        frag.highFiveGuys();
        frag.attack("test");
        // frag.guardGate();
        frag.display();
    }
    return (0);
}
