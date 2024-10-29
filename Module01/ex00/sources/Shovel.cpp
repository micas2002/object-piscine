#include "Shovel.hpp"

Shovel::Shovel() {
	std::cout << "Default Constructor of Shovel called" << std::endl;
}

Shovel::Shovel(const Shovel &copy) {
	std::cout << "Copy Constructor of Shovel called" << std::endl;
	*this = copy;
}

Shovel::~Shovel() {
	std::cout << "Default Destructor of Shovel called" << std::endl;
}

Shovel & Shovel::operator=(const Shovel &assign) {
	std::cout << "Assignment operator of Shovel called" << std::endl;
	// if (this != &assign)
	// 	_numberOfUses = assign._numberOfUses;
	return(*this);
}

void	Shovel::use() {
	std::cout << "The Shovel is used to dig some dirt" << std::endl;
	addNumberOfUses();
}
