/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 07:45:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/06 10:31:37 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClassPhonebook.hpp"

int	main(void)
{	
	Phonebook	phonebook;
	std::string	input;
	int			i;
	
	i = 0;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact(i++);
		else if (input == "SEARCH")
		{
			if (phonebook.searchContact() == 1)
				break ;
		}
		else if (input == "EXIT")
			break ;
		if (i == 8)
			i = 0;
	}
	return (0);
}
