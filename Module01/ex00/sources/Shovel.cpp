#include "Shovel.hpp"

Shovel::Shovel() : numberOfUses(0) {

}

Shovel::Shovel(const Shovel &copy) {
	*this = copy;
}

Shovel::~Shovel() {

}

Shovel & Shovel::operator=(const Shovel &assign) {
	if (this != &assign)
		numberOfUses = assign.numberOfUses;
	return(*this);
}
