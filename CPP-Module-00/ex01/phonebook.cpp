#include "phonebook.hpp"

Phonebook::Phonebook() {
	std::cout << "PHONEBOOK" << std::endl;
	std::cout << "- ADD - adds a new contact" << std::endl;
	std::cout << "- SEARCH - opens phonebook" << std::endl;
	std::cout << "- EXIT - guess what..." << std::endl;
}

Phonebook::~Phonebook(void){}

void	Phonebook::display() {
	std::cout << "index     |first_name|last_name |nickname  " << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << i << std::setw(10) << "|";
		std::cout << _contacts[i].getFirstName() << std::setw(11 - _contacts[i].getFirstName().length()) << "|";
		std::cout << _contacts[i].getLastName() << std::setw(11 - _contacts[i].getLastName().length()) << "|";
		std::cout << _contacts[i].getNickname() << std::setw(11 - _contacts[i].getNickname().length());
		std::cout << std::endl;
	}
}

void	Phonebook::search() {
	int index;

	display();
	while (1) {
		std::cout << "index: ";
		std::cin >> index;
		if (index >= 0 && index <= 7) {
			break ;
		}
		else {
			std::cout << "Error: Wrong index";
		}
	}
	_contacts[index].printContact();
}

void	Phonebook::add(int i) {
	std::string	input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	_contacts[i].setFirstName(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	_contacts[i].setLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	_contacts[i].setNickname(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	_contacts[i].setDarkestSecret(input);
	std::cout << "Phonenumber: ";
	std::getline(std::cin, input);
	_contacts[i].setPhonenumber(input);
}
