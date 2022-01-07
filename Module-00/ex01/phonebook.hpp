#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook {
private:
	Contact	_contacts[8];
public:
	Phonebook();
	~Phonebook();

	void	add(int i);
	void	search();
	void	display();
};

#endif