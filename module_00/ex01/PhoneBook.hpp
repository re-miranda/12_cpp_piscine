#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

# define MAX_SIZE 8

# include "Contact.hpp"

class	PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);

private:
	Contact	_contactArray[MAX_SIZE];
	void	_add_contact(void);
	void	_search(void) const;
	void	_prompt(void);
	void	_print_summary(void) const;
};

#endif

