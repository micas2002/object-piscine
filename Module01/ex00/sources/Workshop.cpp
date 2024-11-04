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
	if (this != &assign)
		_shopWorkers = assign._shopWorkers;
	return(*this);
}

void	Workshop::signUp(Worker *worker) {
	if (worker) {
		_shopWorkers.insert(worker);
		worker->addWorkshop(this);
	}
}

void	Workshop::leaveWorkshop(Worker *worker) {
	if (worker) {
		_shopWorkers.erase(worker);	
		worker->removeWorkshop(this);
	}
}

void	Workshop::executeWorkDay() {
	std::set<Worker*>::iterator it = _shopWorkers.begin();

	for (; it != _shopWorkers.end(); ++it)
		(*it)->work();
}
