#include "Position.hpp"

Position::Position() : x(0), y(0), z(0) {
	std::cout << "Default Constructor of Position called" << std::endl;
}

Position::Position(const Position &copy) {
	std::cout << "Copy Constructor of Position called" << std::endl;
	*this = copy;
}

Position::~Position() {
	std::cout << "Default Destructor of Position called" << std::endl;
}

Position & Position::operator=(const Position &assign) {
	std::cout << "Assignment operator of Position called" << std::endl;
	if (this != &assign) {
		x = assign.x;
		y = assign.y;
		z = assign.z;
	}
	return (*this);
}
