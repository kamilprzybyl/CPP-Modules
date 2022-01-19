#include <Bureaucrat.hpp>
#include <exception>

int	main() {

	try {
		// Bureaucrat	bureaucrat( "Me", 0 ); // grade to high
		// Bureaucrat	bureaucrat( "Me", 151 ); // grade to low
		Bureaucrat	bureaucrat( "Me", 15 );

		std::cout << bureaucrat.getName() << std::endl;
		// std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl; 
	}
}
