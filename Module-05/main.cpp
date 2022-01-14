#include <Bureaucrat.hpp>
#include <exception>

int	main() {

	try
	{
		/* do some stuff with bureaucrats */
		throw Bureaucrat( "Me", 1 );
	}
	catch (std::exception & e)
	{
		/* handle exception */
	}
}
