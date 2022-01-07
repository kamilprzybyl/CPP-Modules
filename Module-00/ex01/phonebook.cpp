#include "phonebook.hpp"

Phonebook::Phonebook() {
	std::cout << "PHONEBOOK" << std::endl;
	std::cout << "- ADD - adds a new contact" << std::endl;
	std::cout << "- SEARCH - opens phonebook" << std::endl;
	std::cout << "- EXIT - guess what..." << std::endl;
}

Phonebook::~Phonebook(void){}

void	Phonebook::display() {
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << std::setw(10) << i << "|";
		(_contacts[i].getFirstName().length() > 10) ? std::cout << std::setw(10) << _contacts[i].getFirstName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contacts[i].getFirstName() << "|";
		(_contacts[i].getLastName().length() > 10) ? std::cout << std::setw(10) << _contacts[i].getLastName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contacts[i].getLastName() << "|";
		(_contacts[i].getNickname().length() > 10) ? std::cout << std::setw(10) << _contacts[i].getNickname().substr(0, 9) + "." << std::endl : std::cout << std::setw(10) << _contacts[i].getNickname() << std::endl;
	}
}

void	Phonebook::search() {
	std::string index;

	display();
	while (1) {
		std::cout << "index: ";
		std::cin >> index;
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7') {
			break ;
		}
		else {
			std::cout << "Error: Wrong index" << std::endl;
		}
	}
	_contacts[index[0] - 48].printContact();
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
