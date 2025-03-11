#pragma once

#include "Room.hpp"
#include "FormFactory.hpp"
#include "Course.hpp"
#include <iostream>
#include <vector>

class Room;
class Course;
class Classroom;

class Person {
	private:
		std::string	_name;
		Room*		_currentRoom;

	public:
		Person();
		Person(std::string p_name);
		Person(const Person& copy);
		~Person();

		Person&	operator = (const Person& assign);

		std::string&	getName();

		Room*	room();
};

class Student : public Person {
	private:
		std::vector<Course*>	_subscribedCourse;

	public:
		Student();
		Student(std::string p_name);
		Student(const Student& copy);
		~Student();

		Student&	operator = (const Student& assign);

		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
};

class Staff : public Person {
	private:

	public:
		Staff();
		Staff(std::string p_name);
		Staff(const Staff& copy);
		~Staff();

		Staff&	operator = (const Staff& assign);

		void	sign(Form* p_form);
};

class Headmaster : public Staff {
	private:
		std::vector<Form*>	_formToValidate;

	public:
		Headmaster();
		Headmaster(const Headmaster& copy);
		~Headmaster();

		Headmaster&	operator = (const Headmaster& assign);

		void	receiveForm(Form* p_form);
};

class Professor : public Staff {
	private:
		Course*	_currentCourse;

	public:
		Professor();
		Professor(const Professor& copy);
		~Professor();

		Professor&	operator = (const Professor& assign);

		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
};

class Secretary : public Staff {
	private:

	public:
		Secretary();
		Secretary(const Secretary& copy);
		~Secretary();

		Secretary&	operator = (const Secretary& assign);

		Form*	createForm(FormType p_formType);
		void	archiveForm();
};
