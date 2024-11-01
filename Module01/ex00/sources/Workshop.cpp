#include "Workshop.hpp"

Workshop::Workshop() {
	std::cout << "Default Constructor of Workshop called" << std::endl;
}

Workshop::Workshop(const Workshop &copy) {
	std::cout << "Copy Constructor of Workshop called" << std::endl;
	*this = copy;
}

Workshop::~Workshop() {
	std::cout << "Assignment operator of Workshop called" << std::endl;
}

Workshop & Workshop::operator=(const Workshop &assign) {
	std::cout << "Default Destructor of Workshop called" << std::endl;
	return(*this);
}

void	Workshop::signUp(Worker *worker) {

}

void	Workshop::leaveWorkshop(Worker *worker) {
	
}
