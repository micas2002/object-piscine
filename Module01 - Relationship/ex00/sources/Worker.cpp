#include "Worker.hpp"

// Definition of static _whoHasTool variable
std::map<Tool*, Worker*>	Worker::_whoHasTool;

Worker::Worker() : _coordonnee(Position()), _stat(Statistic()) {
	std::cout << "Default Constructor of Worker called" << std::endl;
}

Worker::Worker(const Worker &copy) {
	std::cout << "Copy Constructor of Worker called" << std::endl;
	*this = copy;
}

Worker::~Worker() {
	std::cout << "Default Destructor of Worker called" << std::endl;

	for (std::set<Tool*>::iterator it = _tools.begin(); it != _tools.end(); ++it) {
		_whoHasTool.erase(*it);
	}
}

Worker & Worker::operator=(const Worker &assign) {
	std::cout << "Assignment operator of Worker called" << std::endl;
	if (this != &assign) {
		_coordonnee = assign._coordonnee;
		_stat = assign._stat;
		_tools = assign._tools;
		_workshops = assign._workshops;
	}
	return (*this);
}

Position	Worker::getCoordonnee() const {
	return (_coordonnee);
}

Statistic	Worker::getStat() const {
	return (_stat);
}

std::set<Tool*>	Worker::getTools() const {
	if (_tools.empty())
		throw std::out_of_range("This Worker doesn't have any Tools yet");
	return (_tools);
}

std::set<Workshop*>	Worker::getWorkshops() const {
	return (_workshops);
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
		throw std::invalid_argument("Could not assign the Tool to the Worker");
}

void	Worker::removeTool(Tool *tool) {
	if (tool) {
		std::set<Tool*>::iterator it = _tools.find(tool);
		if (it != _tools.end()) {
			_tools.erase(tool);
			_whoHasTool.erase(tool);
		}
		else
			throw std::out_of_range("Tool not found in this Worker's set");
	}
	else
		throw std::invalid_argument("Invalid tool pointer");
}

void	Worker::addWorkshop(Workshop *workshop) {
	if (workshop)
		_workshops.insert(workshop);
}

void	Worker::removeWorkshop(Workshop *workshop) {
	if (workshop)
		_workshops.erase(workshop);
}

void	Worker::work() {
	std::cout << "The worker starts working at the Workshop" << std::endl;
}
