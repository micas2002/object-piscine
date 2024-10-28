#include "Worker.hpp"

Worker::Worker() : _coordonnee(Position()), _stat(Statistic()), _shovel(nullptr) {
	_whoHasTheShovel.insert(std::pair< Worker*, Shovel*>(this, _shovel));
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
	if (shovel && !_shovel) {
		std::map<Worker*, Shovel*>::iterator it = _whoHasTheShovel.begin();

		for (; it != _whoHasTheShovel.end(); ++it) {
			if (it->second == shovel)
				it->first->removeShovel();
		}
		_shovel = shovel;
		_whoHasTheShovel[this] = shovel;
		return;
	}
	throw ("Could not assign the Shovel to the Worker");
}

void	Worker::removeShovel() {
	_shovel = nullptr;
	_whoHasTheShovel[this] = nullptr;
}
