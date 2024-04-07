#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const int numAnimals = 100;
    Animal  *animals[numAnimals];

    std::cout << std::endl << "test 50 cats >>>>>" << std::endl;

    for (int i = 0; i < numAnimals / 2; i++) {
        animals[i] = new Cat();
    }

    std::cout << std::endl << "test 50 dogs >>>>>" << std::endl;

    for (int i = numAnimals / 2; i < numAnimals; i++) {
        animals[i] = new Dog();
    }

    std::cout << std::endl << "test delete all >>>>>" << std::endl;

    for (int i = 0; i < numAnimals; i++) {
        delete(animals[i]);
    }

    std::cout << std::endl << "test 1 Dog and 1 Cat >>>>>" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    std::cout << std::endl << "test Deep copy >>>>>" << std::endl;

    {
        Dog j;
        Dog i;
        std::cout << "j`s value before assingment: " << &j << std::endl;
        j = i;
        std::cout << "j`s value after assingment: " << &j << std::endl;
        std::cout << "i`s value: " << &i << std::endl;
    }

    return (0);
}
