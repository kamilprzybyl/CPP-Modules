#include <iter.hpp>

template<typename T>
void	print( T & a ) {

	std::cout << a << std::endl;
}

int	main() {

	int arr[] = {1, 1};
	iter(arr, 2, print);

	std::cout << std::endl;

	double arr2[] = {1.0, 1.1};
	iter(arr2, 2, print);

	std::cout << std::endl;

	std::string arr3[] = {"dude", "another dude", "and another dude"};
	iter(arr3, 3, print);
}