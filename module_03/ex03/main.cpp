#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap dia("test_name");
    DiamondTrap dian;

    dia.display();
    dian.display();
    dia.attack();
    dian.attack();
    dia.whoAmI();
    dian.whoAmI();
    return (0);
}
