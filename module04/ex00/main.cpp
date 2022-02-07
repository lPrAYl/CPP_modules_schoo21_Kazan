#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal*		animal = new Animal;
	const Animal*		cat = new Cat;
	const Animal*		dog = new Dog;
	const WrongAnimal*	wrongCat = new WrongCat;

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	wrongCat->makeSound();

	delete animal;
	delete cat;
	delete dog;
	delete wrongCat;

	return 0;
}
