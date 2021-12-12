/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:39:04 by julian            #+#    #+#             */
/*   Updated: 2021/12/06 10:29:33 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContacts.hpp"
#include <string>

void		Contacts::setIndex(const int index) {this->_index = index;}
void		Contacts::setFirstName(const std::string str) {this->_firstName = str;}
void		Contacts::setLastName(const std::string str) {this->_lastName = str;}
void		Contacts::setNickname(const std::string str) {this->_nickname = str;}
void		Contacts::setPhonenumber(const std::string str) {this->_phonenumber = str;}
void		Contacts::setDarkestSecret(const std::string str) {this->_darkestSecret = str;}

int			Contacts::getIndex(void) const {return (this->_index);}
std::string	Contacts::getFirstName(void) const {return (this->_firstName);}
std::string	Contacts::getLastName(void) const {return (this->_lastName);}
std::string	Contacts::getNickname(void) const {return (this->_nickname);}
std::string	Contacts::getPhonenumber(void) const {return (this->_phonenumber);}
std::string	Contacts::getDarkestSecret(void) const {return (this->_darkestSecret);}
