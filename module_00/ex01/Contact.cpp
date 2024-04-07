#include "Contact.hpp"

Contact::Contact(void){
	this->_contact_is_set = 0;
}

Contact::~Contact(void){
}

void	Contact::setContact() {
	this->_set_this_contact();
}

void	Contact::_set_this_contact(void){

	if (this->_contact_is_set)
		this->_overwrite_this_contact();
	this->_first_name = this->_get_contact_info("FIRST NAME");
	this->_last_name = this->_get_contact_info("LAST NAME");
	this->_nickname = this->_get_contact_info("NICKNAME");
	this->_phone_number = this->_get_contact_info("PHONE NUMBER");
	this->_darkest_secret = this->_get_contact_info("DARKEST SECRET");
	this->_contact_is_set = 1;
}

void	Contact::_overwrite_this_contact(void) {
	std::cout << "Contact " << this->_first_name << " overwritten" << std::endl;
	this->_first_name.erase();
	this->_last_name.erase();
	this->_nickname.erase();
	this->_phone_number.erase();
	this->_darkest_secret.erase();
}

std::string	Contact::_get_contact_info(std::string var_id){
	std::string	usr_input;

	while (usr_input.empty())
	{
		std::cout << "Please specify " << var_id << ": "; 
		if (!std::getline(std::cin, usr_input))
            break ;
	}
	return (usr_input);
}

std::string	Contact::get_name(void) const{
	return (this->_getter(this->_first_name));
}

std::string	Contact::get_last_name(void) const{
	return (this->_getter(this->_last_name));
}

std::string	Contact::get_nickname(void) const{
	return (this->_getter(this->_nickname));
}

std::string	Contact::_getter(std::string _value) const{
	std::string	value(_value);

	if (_value.empty())
		return ("EMPTY");
	if (_value.size() > 10)
	{
		value = _value.substr(0, 10);
		value[9] = '.';
	}
	return (value);
}

void		Contact::print(void) const{
	if (this->_first_name.empty())
	{
		std::cout << "EMPTY" << std::endl;
		return ;
	}
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name<< std::endl;
	std::cout << "Nickname: " << this->_nickname<< std::endl;
	std::cout << "Phone number: " << this->_phone_number<< std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret<< std::endl;
}

