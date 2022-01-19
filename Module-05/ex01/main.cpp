#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int	main() {

	try {

		Bureaucrat	bureaucrat( "I", 14 );
		Form		form( "someForm", 28, 151 ); //grade too low
		// Form		form( "someForm", 10, 15 ); // I shouldn't be able to sign it cause my grade is to low
		// bureaucrat.increment();
		// bureaucrat.increment();
		// bureaucrat.increment();
		// bureaucrat.increment();
		// Form		form( "someForm", 10, 15 ); // I incremenetd my grade and now everyone is happy
		bureaucrat.signForm(form);
	}
	catch (std::exception & e) {

		std::cout << e.what() << std::endl; 
	}
}
