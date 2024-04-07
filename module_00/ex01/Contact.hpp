#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
	private:
	int		_contact_is_set;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	std::string	_get_contact_info(std::string var_id);
	void		_overwrite_this_contact();
	void		_set_this_contact(void);
	std::string	_getter(std::string _value) const;

	public:
	void		setContact(void);
	Contact(void);
	~Contact(void);
	std::string	get_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nickname(void) const;
	void		print(void) const;
};

#endif

