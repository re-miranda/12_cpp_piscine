#include <iostream>

int main( void ) {
    std::string brain_str("HI THIS IS BRAIN");
    std::string *stringPTR = &brain_str;
    std::string &stringREF = brain_str;

    std::cout << &brain_str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << brain_str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}

