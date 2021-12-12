/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:32:51 by julian            #+#    #+#             */
/*   Updated: 2021/12/08 09:15:05 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "ClassPhonebook.hpp"

Phonebook::Phonebook(void)
{	
	int	i;
	
	std::cout << "Welcome to my awesome PhoneBook!!!" << std::endl;
	std::cout << "ADD	--> Input a new contact information " << std::endl;
	std::cout << "SEARCH	--> Display available contacts " << std::endl;
	std::cout << "EXIT	--> Quit program " << std::endl;

	i = -1;
	while (i++ < 8)
		_contacts[i].setIndex(-1);
}

Phonebook::~Phonebook(void){}

void	Phonebook::addContact(int i)
{
	std::string	input;

	_contacts[i].setIndex(i + 1);
	std::cout << "First name: ";
	std::getline(std::cin, input);
	_contacts[i].setFirstName(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	_contacts[i].setLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	_contacts[i].setNickname(input);
	std::cout << "Phonenumber: ";
	std::getline(std::cin, input);
	_contacts[i].setPhonenumber(input);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	_contacts[i].setDarkestSecret(input);
}

int	Phonebook::searchContact(void)
{
	int			j;
	std::string	index;
	std::string	output;

	if (_contacts[0].getIndex() < 1)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return (0);
	}
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	j = -1;
	while (++j < 8)
	{
		if (_contacts[j].getIndex() >= 0)
		{
			std::cout << std::setw(10) << _contacts[j].getIndex() << "|";
			output = _contacts[j].getFirstName();
			if (output.size() > 10)
			{
				output.resize(9);
				output += ".";
			}
			std::cout << std::setw(10) << output << "|";
			output = _contacts[j].getLastName();
			if (output.size() > 10)
			{
				output.resize(9);
				output += ".";
			}
			std::cout << std::setw(10) << output << "|";
			output = _contacts[j].getNickname();
			if (output.size() > 10)
			{
				output.resize(9);
				output += ".";
			}
			std::cout << std::setw(10) << output << std::endl;
		}
	}
	std::cout << "Index: ";
	std::getline(std::cin, index);
	if (index == "EXIT")
		return (1);
	if (index == "1" || index == "2" || index == "3" || index == "4" \
		|| index == "5" || index == "6" || index == "7" || index == "8")
	{
		if (_contacts[std::stoi(index) - 1].getIndex() == std::stoi(index))
		{
			std::cout << "First name: " << _contacts[std::stoi(index) - 1].getFirstName() << std::endl;
			std::cout << "Last name: " << _contacts[std::stoi(index) - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << _contacts[std::stoi(index) - 1].getNickname() << std::endl;
			std::cout << "Phone number: " << _contacts[std::stoi(index) - 1].getPhonenumber() << std::endl;
			std::cout << "Darkest Secret: " << _contacts[std::stoi(index) - 1].getDarkestSecret() << std::endl;
			return (0);
		}
	}
	std::cout << "No entry found" << std::endl;
	return (0);
}