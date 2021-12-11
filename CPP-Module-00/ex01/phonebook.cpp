#include "phonebook.hpp"

void search(phonebook phonebook) {
	int index;

	phonebook.display();
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
	phonebook.contact[index].print_contact();
}

void add(phonebook &phonebook, int i) {
	std::cout << "First name: ";
	phonebook.contact[i].add_first_name();
	std::cout << "Last name: ";
	phonebook.contact[i].add_last_name();
	std::cout << "Nickname: ";
	phonebook.contact[i].add_nickname();
	std::cout << "Darkest secret: ";
	phonebook.contact[i].add_darkest_secret();
	std::cout << "Phonenumber: ";
	phonebook.contact[i].add_phonenumber();
}

int main() {
	phonebook	phonebook;
	string		cmd;
	int			i;

	i = 0;
	while (1) {
		std::cout << "> ";
		getline(cin, cmd);
		if (cmd == "EXIT")
			return 0;
		else if (cmd == "SEARCH")
			search(phonebook);
		else if (cmd == "ADD") {
			add(phonebook, i);
			i++;
			if (i == 8)
				i = 0;
		}
	}
	return 0;
}