#include <iostream>
using namespace std;


class contact {
private:
	string first_name;
	string last_name;
	string nickname;
	string darkest_secret;
	int phonenumber;
public:
	void	add_first_name(string arg) {first_name = arg;}
	void	add_last_name(string arg) {last_name = arg;}
	void	add_nickname(string arg) {nickname = arg;}
	void	add_darkest_secret(string arg) {darkest_secret = arg;}
	void	add_phonenumber(int arg) {phonenumber = arg;}

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
	// void display() {
	// 	std::cout << "index     |first_name|last_name |nickname  ";
	// 	while (contact) {
	// 		std::cout << contact;
	// 	}
		
	// }
};