#pragma once

#include "Person.hpp"
#include <vector>

class Room {
	private:
		long long				ID;
		std::vector<Person*>	_occopants;

	public:
		Room();

		bool	canEnter(Person*);
		void	enter(Person*);
		void	exit(Person*);

		void	printOccupant();
};
