#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {

	private:
		std::string	name;

	public:
		HumanA( std::string name, Weapon weapon1 );
		~HumanA();

		void	attack();
};

#endif