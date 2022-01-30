#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main() {

	int arr[] = { 2, 0, 4, 5, 5, 6, 8, 1 };

	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
	
	try {
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(v, 11) << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
