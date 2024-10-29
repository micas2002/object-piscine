#include "Hammer.hpp"

Hammer::Hammer() {
	std::cout << "Default Constructor of Hammer called" << std::endl;
}

Hammer::Hammer(const Hammer &copy) {
	std::cout << "Copy Constructor of Hammer called" << std::endl;
	*this = copy;
}

Hammer::~Hammer() {
	std::cout << "Default Destructor of Hammer called" << std::endl;
}

Hammer & Hammer::operator=(const Hammer &assign) {
	std::cout << "Assignment operator of Hammer called" << std::endl;
	return (*this);
}

void	Hammer::use() {
	std::cout << "The Hammer is used to hammer some nails" << std::endl;
	addNumberOfUses();
}
