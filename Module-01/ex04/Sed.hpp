#pragma once

#include <iostream>
#include <fstream>
#include <string>

class	Sed {

	private:

	public:
		Sed();
		~Sed();

		static void	replace(std::string const &filename, char *search, char *replace);

};
