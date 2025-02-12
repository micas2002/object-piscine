#pragma once

#include "Course.hpp"
#include "Person.hpp"
#include "Form.hpp"
#include <vector>

class Person;
class Course;

class Room {
	private:
		long long				ID;
		std::vector<Person*>	_occupants;

	public:
		Room();
		Room(int id);
		Room(const Room& copy);
		~Room();

		Room&	operator = (const Room& assign);

		long long	getID();

		bool	canEnter(Person* p_person);
		void	enter(Person* p_person);
		void	exit(Person* p_person);
		void	printOccupant();
};

class Classroom : public Room {
	private:
		Course*	_currentRoom;

	public:
		Classroom();
		Classroom(Course* currentRoom);
		Classroom(const Classroom& copy);
		~Classroom();

		Classroom&	operator = (const Classroom& assign);

		void	assignCourse(Course* p_course);
};

class Courtyard : public Room {
	private:

	public:
		Courtyard();
		Courtyard(const Courtyard& copy);
		~Courtyard();

		Courtyard&	operator = (const Courtyard& assign);
};

class HeadmasterOffice : public Room {
	private:

	public:
		HeadmasterOffice();
		HeadmasterOffice(const HeadmasterOffice& copy);
		~HeadmasterOffice();

		HeadmasterOffice&	operator = (const HeadmasterOffice& assign);
};

class SecretarialOffice : public Room {
	private:
		std::vector<Form*>	_archivedForms;
		
	public:
		SecretarialOffice();
		SecretarialOffice(const SecretarialOffice& copy);
		~SecretarialOffice();

		SecretarialOffice&	operator = (const SecretarialOffice& assign);
};

class StaffRestRoom : public Room {
	private:

	public:
		StaffRestRoom();
		StaffRestRoom(const StaffRestRoom& copy);
		~StaffRestRoom();

		StaffRestRoom&	operator = (const StaffRestRoom& assign);
};
