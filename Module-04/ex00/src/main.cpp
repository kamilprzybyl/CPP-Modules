#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	Animal const		*animal = new Animal();
	Animal const		*dog = new Dog();
	Animal const		*cat = new Cat();
	WrongAnimal const	*wrongAnimal = new WrongCat();

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	dog->makeSound(); //will output the cat sound!
	cat->makeSound();
	animal->makeSound();
	wrongAnimal->makeSound();

	delete animal;
	delete cat;
	delete dog;
	delete wrongAnimal;
}