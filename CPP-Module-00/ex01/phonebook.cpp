#include "phonebook.hpp"

int main() {
	phonebook new_phonebook;
	string cmd;
	int i;

	i = 0;
	while (1) {
		std::cout << "> ";
		std::cin >> cmd;
		if (cmd == "EXIT") {
			return 0;
		}
		else if (cmd == "SEARCH") {
			int index;
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
			new_phonebook.contact[index].print_contact();
		}
		else if (cmd == "ADD") {
			std::cout << "First name: ";
			new_phonebook.contact[i].add_first_name();
			std::cout << "Last name: ";
			new_phonebook.contact[i].add_last_name();
			std::cout << "Nickname: ";
			new_phonebook.contact[i].add_nickname();
			std::cout << "Darkest secret: ";
			new_phonebook.contact[i].add_darkest_secret();
			std::cout << "Phonenumber: ";
			new_phonebook.contact[i].add_phonenumber();
			i++;
			if (i == 8) {
				i = 0;
			}
		}
	}
}