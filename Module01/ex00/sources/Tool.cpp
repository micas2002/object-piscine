#include "Tool.hpp"

Tool::Tool() : _numberOfUses(0) {
	std::cout << "Default Constructor of Tool called" << std::endl;
}

Tool::Tool(const Tool &copy) {
	std::cout << "Copy Constructor of Tool called" << std::endl;
	*this = copy;
}

Tool::~Tool() {
	std::cout << "Default Destructor of Tool called" << std::endl;
}

Tool & Tool::operator=(const Tool &assign) {
	std::cout << "Asignment operator of Tool called" << std::endl;
	if (this != &assign)
		_numberOfUses = assign._numberOfUses;
	return(*this);
}

int	Tool::getNumberOfUses() {
	return (_numberOfUses);
}

void	Tool::addNumberOfUses() {
	_numberOfUses += 1;
}
