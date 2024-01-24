#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	this->_prompt();
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}

void	PhoneBook::_add_contact(){
	static int	counter;

	if (counter >= MAX_SIZE)
		counter = 0;
	this->_contactArray[counter].setContact();
	counter++;
	std::cout << "Contact stored" << std::endl;
	return ;
}

void	PhoneBook::_search(void) const{
	std::string         input;
	std::istringstream  iinputstream;
    int                 input_nb = 0;

	this->_print_summary();
	while (input_nb < 1 || input_nb > 8 || iinputstream.fail() || !iinputstream.eof())
	{
        iinputstream.clear();
		std::cout << "Type a number to display detailed info: ";
		if (!std::getline(std::cin, input))
            return ;
        iinputstream.str(input);
        input_nb = 0;
        iinputstream >> input_nb;
	}
	this->_contactArray[input_nb - 1].print();
	return ;
}

void	PhoneBook::_print_summary(void) const{
	int		index;

	index = 0;
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << "index" << "|";
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << "First name" << "|";
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << "Last name" << "|";
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << "Nickname";
		std::cout << std::endl;
	while (index++ < MAX_SIZE)
	{
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << index << "|";
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << this->_contactArray[index - 1].get_name() << "|";
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << this->_contactArray[index - 1].get_last_name() << "|";
		std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << this->_contactArray[index - 1].get_nickname();
		std::cout << std::endl;
	}
	return ;
}

void	PhoneBook::_prompt(void) {
	std::string	input_cmd;

	std::cout << "➜ ";
	if (!std::getline(std::cin, input_cmd))
            return ;
	if (input_cmd == "ADD")
		this->_add_contact();
	else if (input_cmd == "SEARCH")
		this->_search();
	else if (input_cmd == "EXIT")
		return ;
    this->_prompt();
}

