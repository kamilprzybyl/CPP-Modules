#include "phonebook.hpp"

int main() {
	string cmd;
	phonebook new_phonebook;

	while (1) {
		std::cout << "> ";
		std::cin >> cmd;
		if (cmd == "EXIT") {
			return 0;
		}
		else if (cmd == "SEARCH") {
			int index;
			std::cout << "index: ";
			std::cin >> index;
			new_phonebook.contact[index].print_contact();
		}
		else if (cmd == "ADD") {
			string first_name;
			std::cout << "First name: ";
			std::cin >> first_name;
			new_phonebook.contact[0].add_first_name(first_name);
			string last_name;
			std::cout << "Last name: ";
			std::cin >> last_name;
			new_phonebook.contact[0].add_last_name(last_name);
			string nickname;
			std::cout << "Nickname: ";
			std::cin >> nickname;
			new_phonebook.contact[0].add_nickname(nickname);
			string darkest_secret;
			std::cout << "Darkest secret: ";
			std::cin >> darkest_secret;
			new_phonebook.contact[0].add_darkest_secret(darkest_secret);
			int phonenumber;
			std::cout << "Phonenumber: ";
			std::cin >> phonenumber;
			new_phonebook.contact[0].add_phonenumber(phonenumber);
		}
	}
}