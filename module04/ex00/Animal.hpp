#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

# define RED	"\x1B[0;91m"
# define GREEN	"\x1B[0;92m"
# define YELLOW	"\x1B[0;93m"
# define BLUE	"\x1B[0;94m"
# define PINK	"\x1B[0;95m"
# define CYAN	"\x1B[0;96m"
# define RESET	"\033[0m"

class	Animal {
protected:
	std::string	_type;

public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(Animal const& other);

	virtual std::string const&	getType() const;
	virtual void 				makeSound() const;

	Animal const& operator=(Animal const& other);
};

#endif //ANIMAL_HPP
