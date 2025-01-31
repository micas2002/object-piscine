#pragma once

#include "Room.hpp"
#include "Form.hpp"

class Person {
	private:
		std::string	_name;
		Room*		_currentRoom;

	public:
		Person(std::string p_name);

		Room*	room() {return (_currentRoom);}
};

class Student : public Person {
	private:
		std::vector<Course*>	_subscribedCourse;

	public:
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
};

class Staff : public Person {
	private:

	public:
		void	sign(Form* p_form);
};

class Headmaster : public Staff {
	private:
		std::vector<Form*>	_formToValidate;

	public:
		void	receiveForm(Form* p_form);
};

class Professor : public Staff {
	private:
		Course*	_currentCourse;

	public:
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
};

class Secretary : public Staff {
	private:

	public:
		Form*	createForm(FormType p_formType);
		void	archiveForm();
};
