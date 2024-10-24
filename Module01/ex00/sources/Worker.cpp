#include "Worker.hpp"

Worker::Worker() : _coordonnee(Position()), _stat(Statistic()), _shovel(nullptr) {
	std::cout << "Default Constructor of Worker called" << std::endl;
}

Worker::Worker(const Worker &copy) {
	std::cout << "Copy Constructor of Worker called" << std::endl;
	*this = copy;
}

Worker::~Worker() {
	std::cout << "Default Deconstructor of Worker called" << std::endl;
}

Worker & Worker::operator=(const Worker &assign) {
	std::cout << "Assignment operator of Worker called" << std::endl;
	if (this != &assign) {
		_coordonnee = assign._coordonnee;
		_stat = assign._stat;
	}
	return (*this);
}

Position	Worker::getCoordonnee() const {
	return (_coordonnee);
}

Statistic	Worker::getStat() const	{
	return (_stat);
}

void	Worker::addShovel(Shovel *shovel) {
	_shovel = shovel;
}

void	Worker::removeShovel() {
	_shovel = nullptr;
}
