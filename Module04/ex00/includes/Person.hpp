#pragma once

#include "Room.hpp"
#include <iostream>

class Person {
	private:
		std::string	_name;
		Room*		_currentRoom;

	public:
		Personne(std::string p_name);

		Room*	room() {return (_currentRoom);}
};
