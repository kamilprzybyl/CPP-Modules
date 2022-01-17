#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int	main() {

	try {

		Bureaucrat	bureaucrat( "Me", 27 );
		Form		form( "firstForm", 26, 15 );

		bureaucrat.signForm(form);
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl; 
	}
}
