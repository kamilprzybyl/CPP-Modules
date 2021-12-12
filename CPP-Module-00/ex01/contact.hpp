#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_darkestSecret;
	std::string	_phonenumber;
public:
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getDarkestSecret();
	std::string	getPhonenumber();

	void		setLastName(std::string arg);
	void		setNickname(std::string arg);
	void		setDarkestSecret(std::string arg);
	void		setPhonenumber(std::string arg);
	void		setFirstName(std::string arg);

	void		printContact();
};

#endif