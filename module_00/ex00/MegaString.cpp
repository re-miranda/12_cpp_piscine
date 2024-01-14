#include "MegaString.hpp"

MegaString::MegaString( void ) {
    this->is_first_run = true;
    return ;
}

MegaString::~MegaString( void ) {
    return ;
}

void    MegaString::print_loud( char *input ) {
    std::string loud_input = this->to_upper(input);

    this->trim_spaces(loud_input);
    if (this->is_first_run == false)
        loud_input.insert(0, " ");
    else
        this->is_first_run = false;
    std::cout << loud_input;
    return ;
}

std::string MegaString::to_upper( std::string input ) {
    for (size_t x = 0; x < input.length(); x++) {
        input[x] = toupper(input[x]);
    }
    return (input);
}

void    MegaString::trim_spaces( std::string &input ) {
    while (!input.empty() && input.front() == ' ')
        input.erase(0, 1);
    while (!input.empty() && input.back() == ' ')
        input.pop_back();
    return ;
}

