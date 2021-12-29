#include "phonebook.hpp"

int main() {
	Phonebook	phonebook;
	std::string	input;
	int			i;

	i = 0;
	while () {
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			return 0;
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "ADD") {
			phonebook.add(i);
			i++;
			if (i == 8)
				i = 0;
		}
	}
	return 0;
}
