/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContacts.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:39:04 by julian            #+#    #+#             */
/*   Updated: 2021/12/07 18:52:34 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACTS_HPP
# define CLASSCONTACTS_HPP

# include <string>

class Contacts 
{
	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestSecret;

	public:
		void		setIndex(const int index);
		void		setFirstName(const std::string str);
		void		setLastName(const std::string str);
		void		setNickname(const std::string str);
		void		setPhonenumber(const std::string str);
		void		setDarkestSecret(const std::string str);

		int			getIndex(void) const;
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhonenumber(void) const;
		std::string	getDarkestSecret(void) const;
};

#endif
