#include "Sed.hpp"

Sed::Sed() {}

Sed::~Sed() {}

void	Sed::replace(std::string const &filename, std::string const &search, std::string const &replace) {

	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	infile.open(filename);
	if (!infile)
		throw "couldn't open the input file";
	outfile.open(filename + ".replace", std::ios::trunc);
	if (!outfile) {

		infile.close();
		throw "couldn't open the output file";
	}
	while (std::getline(infile, line)) {

		size_t	pos = line.find(search);
		if (pos != std::string::npos)
			line.replace(pos, replace.length(), replace);
		outfile << line;
		if (!infile.eof())
			outfile << '\n';
	}
	infile.close();
	outfile.close();
}
