#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class	Sed {

	private:

	public:
		Sed();
		~Sed();

		static void	replace(std::string const &filename, std::string const &search, std::string const &replace);

};
