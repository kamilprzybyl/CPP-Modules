#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	// Animal const	*dog = new Dog();
	// Animal const	*cat = new Cat();

	// delete dog;//should not create a leak
	// delete cat;

	// std::cout << std::endl;

	// Animal	const *animals[4];

	// for (int i = 0; i < 4; i++) {

	// 	if (i % 2) {
	// 		animals[i] = new Dog();
	// 	}
	// 	else {
	// 		animals[i] = new Cat();
	// 	}
	// }

	// for (int i = 0; i < 4; i++) {

	// 	delete animals[i];
	// }

	// std::cout << std::endl;

	Cat	cat1;
	Cat	cat2 = cat1;
}
