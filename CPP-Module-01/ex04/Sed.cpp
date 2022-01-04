#include "Sed.hpp"

Sed::Sed() {}

Sed::~Sed() {}

void	Sed::replace(std::string const &filename, char *search, char *replace) {

	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	infile.open(filename);
	if (!infile) {

		std::cout << "couldn't open the input file" << std::endl;
		return;
	}
	outfile.open(filename + ".replace", std::ios::trunc);
	if (!outfile) {

		infile.close();
		std::cout << "couldn't open the output file" << std::endl;
		return;
	}
	while (std::getline(infile, line)) {

		size_t	n = strlen(search);
		size_t	pos = line.find(search);

		while (pos != std::string::npos) {

			line.erase(pos, n);
			line.insert(pos, replace);

			pos += strlen(replace);
			pos = line.find(search, pos, n);
		}

		outfile << line;
		if (!infile.eof())
			outfile << '\n';
	}
	infile.close();
	outfile.close();
}
