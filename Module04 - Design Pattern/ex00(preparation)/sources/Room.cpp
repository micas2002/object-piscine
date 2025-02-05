#include "Room.hpp"

// Class Room
Room::Room() : ID(0) {}

Room::Room(int id) : ID(id) {}

Room::Room(const Room& copy) {*this = copy;}

Room::~Room() {}

Room&	Room::operator=(const Room& assign) {
	if (this != &assign) {
		this->ID = assign.ID;
		this->_occupants = assign._occupants;
	}

	return (*this);
}

bool	Room::canEnter(Person* p_person) {}

void	Room::enter(Person* p_person) {}

void	Room::exit(Person* p_person) {}

void	Room::printOccupant() {}

// Class Classroom
Classroom::Classroom() : _currentRoom(nullptr) {}

Classroom::Classroom(Course* currentRoom) : _currentRoom(currentRoom) {}

Classroom::Classroom(const Classroom& copy) {*this = copy;}

Classroom::~Classroom() {}

Classroom&	Classroom::operator=(const Classroom& assign) {
	if (this != &assign)
		this->_currentRoom = assign._currentRoom;

	return (*this);
}

void	Classroom::assignCourse(Course* p_course) {}

// Class Courtyard
Courtyard::Courtyard() {}

Courtyard::Courtyard(const Courtyard& copy) {*this = copy;}

Courtyard::~Courtyard() {}

Courtyard&	Courtyard::operator=(const Courtyard& assign) {
	(void)assign;

	return (*this);
}

// Class HeadmasterOffice
HeadmasterOffice::HeadmasterOffice() {}

HeadmasterOffice::HeadmasterOffice(const HeadmasterOffice& copy) {*this = copy;}

HeadmasterOffice::~HeadmasterOffice() {}

HeadmasterOffice&	HeadmasterOffice::operator=(const HeadmasterOffice& assign) {
	(void)assign;

	return (*this);
}

// Class SecretarialOffice
SecretarialOffice::SecretarialOffice() {}

SecretarialOffice::SecretarialOffice(const SecretarialOffice& copy) {*this = copy;}

SecretarialOffice::~SecretarialOffice() {}

SecretarialOffice&	SecretarialOffice::operator=(const SecretarialOffice& assign) {
	if (this != &assign)
		this->_archivedForms = assign._archivedForms;

	return (*this);
}

// Class StaffRestRoom
StaffRestRoom::StaffRestRoom() {}

StaffRestRoom::StaffRestRoom(const StaffRestRoom& copy) {*this = copy;}

StaffRestRoom::~StaffRestRoom() {}

StaffRestRoom&	StaffRestRoom::operator=(const StaffRestRoom& assign) {
	(void)assign;

	return (*this);
}
