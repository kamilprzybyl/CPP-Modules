#include "contact.hpp"

void		Contact::setFirstName(std::string arg) {this->_firstName = arg;}
void		Contact::setLastName(std::string arg) {this->_lastName = arg;}
void		Contact::setNickname(std::string arg) {this->_nickname = arg;}
void		Contact::setDarkestSecret(std::string arg) {this->_darkestSecret = arg;}
void		Contact::setPhonenumber(std::string arg) {this->_phonenumber = arg;}

std::string	Contact::getFirstName() {return (this->_firstName);}
std::string	Contact::getLastName() {return (this->_lastName);}
std::string	Contact::getNickname() {return (this->_nickname);}
std::string	Contact::getDarkestSecret() {return (this->_darkestSecret);}
std::string	Contact::getPhonenumber() {return (this->_phonenumber);}

void		Contact::printContact() {
	std::cout << "First name : " << this->_firstName << "\n";
	std::cout << "Last name: " << this->_lastName << "\n";
	std::cout << "Nickname: " << this->_nickname << "\n";
	std::cout << "Phone number: " << this->_darkestSecret << "\n";
	std::cout << "Darkest secret: " << this->_phonenumber << "\n";
}