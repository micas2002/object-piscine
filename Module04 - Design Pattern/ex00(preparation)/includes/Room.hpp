#pragma once

#include "Course.hpp"

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

class Classroom : public Room {
	private:
		Course*	_currentRoom;

	public:
		Classroom();

		void	assignCourse(Course* p_course);
};

class Courtyard : public Room {
	private:

	public:

};

class HeadmasterOffice : public Room {
	private:

	public:
		
};

class SecretarialOffice : public Room {
	private:
		std::vector<Form*>	_archivedForms;
		
	public:

};

class StaffRestRoom : public Room {
	private:

	public:
	
};
