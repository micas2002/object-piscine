#include "Worker.hpp"

Worker::Worker() : _coordonnee(Position()), _stat(Statistic()) {
	std::cout << "Default Constructor of Worker called" << std::endl;
}

Worker::Worker(const Worker &copy) {
	std::cout << "Copy Constructor of Worker called" << std::endl;
	*this = copy;
}

Worker::~Worker() {
	std::cout << "Default Destructor of Worker called" << std::endl;
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

void	Worker::addTool(Tool *tool) {
	if (tool) {
		_tools.insert(tool);

		std::map<Tool*, Worker*>::iterator it = _whoHasTool.find(tool);
		if (it != _whoHasTool.end()) {
			it->second->removeTool(tool);
			_whoHasTool.erase(tool);
		}
		_whoHasTool.insert(std::pair<Tool*, Worker*>(tool, this));
	}
	else
		throw ("Could not assign the Tool to the Worker");
}

void	Worker::removeTool(Tool *tool) {
	std::set<Tool*>::iterator it = _tools.find(tool);
	if (tool && it != _tools.end()) {
		_tools.erase(tool);
		_whoHasTool.erase(tool);
	}
	else
		throw ("Could not remove the Tool from the Worker");
}
