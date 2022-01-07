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
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_darkestSecret << std::endl;
	std::cout << "Darkest secret: " << this->_phonenumber << std::endl;
}