#include "Statistic.hpp"

Statistic::Statistic() : level(0), exp(0) {
	std::cout << "Default Constructor of Statistic called" << std::endl;
}

Statistic::Statistic(const Statistic &copy) {
	std::cout << "Copy Constructor of Statistic called" << std::endl;
	*this = copy;
}

Statistic::~Statistic() {
	std::cout << "Default Destructor of Statistic called" << std::endl;
}

Statistic & Statistic::operator=(const Statistic &assign) {
	std::cout << "Assignment operator of Statistic called" << std::endl;
	if (this != &assign) {
		level = assign.level;
		exp = assign.exp;
	}
	return(*this);
}
