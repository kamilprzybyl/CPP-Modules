#include <iostream>
#include <iomanip>
using namespace std;


class contact {
private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	darkest_secret;
	string	phonenumber;
public:
	void	add_first_name() {getline(cin, first_name);}
	void	add_last_name() {getline(cin, last_name);}
	void	add_nickname() {getline(cin, nickname);}
	void	add_darkest_secret() {getline(cin, darkest_secret);}
	void	add_phonenumber() {getline(cin, phonenumber);}

	string	get_first_name() {return first_name;}
	string	get_last_name() {return last_name;}
	string	get_nickname() {return nickname;}
	string	get_darkest_secret() {return darkest_secret;}
	string	get_phonenumber() {return phonenumber;}

	void print_contact() {
		std::cout << "\n" << "First name : " << first_name << "\n";
		std::cout << "Last name: " << last_name << "\n";
		std::cout << "Nickname: " << nickname << "\n";
		std::cout << "Phonenumber: " << phonenumber << "\n";
		std::cout << "Darkest secret: " << darkest_secret << "\n";
	}
};

class phonebook {
// private:
public:
	contact contact[8];

	void display() {
		std::cout << "index     |first_name|last_name |nickname  " << "\n";
		for (int i = 0; i < 8; i++) {
			std::cout << i << std::setw(10) << "|";
			// if (contact[i].get_first_name().length() > 10)
			std::cout << contact[i].get_first_name().substr(0, 9) << std::setfill(' ') << std::setw(10 - contact[i].get_first_name().length()) + " " << "|";
			// std::cout << contact[i].get_first_name().substr(0, 9) + "." << "|";
			// else
			// 	std::cout << contact[i].get_first_name() + "." << "|";
			// std::cout << contact[i].get_last_name().substr(0, 9) + "." << "|";
			// std::cout << contact[i].get_nickname().substr(0, 9) + ".";
			std::cout << "\n";
		}
	}
};