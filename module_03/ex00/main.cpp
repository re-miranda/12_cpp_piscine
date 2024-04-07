#include "ClapTrap.hpp"

int main(void) {
    ClapTrap    one;
    one.display();
    one.attack("two");
    one.attack("two");
    one.attack("two");
    one.display();
    for (int i = 0; i < 10; i++) {
        one.takeDamage(2);
    }
    one.display();
    for (int i = 0; i < 10; i++) {
        one.beRepaired(1);
    }
    one.display();
    one.attack("two");
    one.takeDamage(2);
    one.display();
    return (0);
}
