#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    // const Animal *not_possible = new Animal();

    std::cout << std::endl << "test makeSound >>>>>" << std::endl;
    j->makeSound();
    i->makeSound();

    std::cout << std::endl << "test delete >>>>>" << std::endl;
    delete j;//should not create a leak
    delete i;

    return (0);
}
