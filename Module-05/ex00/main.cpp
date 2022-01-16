#include <Bureaucrat.hpp>
#include <exception>

int	main() {

	try {

		Bureaucrat	bureaucrat( "Me", 0 );

		std::cout << bureaucrat.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl; 
	}
}
