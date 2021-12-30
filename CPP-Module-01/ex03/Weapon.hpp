#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {

	private:
		std::string	type;

	public:
		Weapon( std::string arg );
		~Weapon();

		std::string&	getType( std::string type ) const;
		void			setType( std::string type );

};

#endif