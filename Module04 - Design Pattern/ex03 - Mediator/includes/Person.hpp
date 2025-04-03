#pragma once

#include "Room.hpp"
#include "FormFactory.hpp"
#include "Course.hpp"
#include "Mediator.hpp"
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
		Form*	_form;

	public:
		Student();
		Student(std::string p_name);
		Student(const Student& copy);
		~Student();

		Student&	operator = (const Student& assign);

		void	attendClass(Classroom* p_classroom);
		void	exitClass();
		void	graduate(Course* p_course);
		void	requestForm(FormType type, Headmaster& headmaster);
		void	requestFormSign(Headmaster& headmaster);
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

class Headmaster : public Staff, public MediatorHeadmaster {
	private:
		std::vector<Form*>	_formToValidate;
		Secretary*			_secretary;

	public:
		Headmaster(Secretary* secretary);
		Headmaster(const Headmaster& copy);
		~Headmaster();

		Headmaster&	operator = (const Headmaster& assign);

		std::vector<Form*>	getFormsToValidate();

		void	receiveForm(Form* p_form);
		void	signForm(Form* p_form);
		void	executeForm(Form* p_form);
		Form*	requestForm(FormType type);
};

class Professor : public Staff, public IProfessor {
	private:
		Course*	_currentCourse;

	public:
		Professor();
		Professor(const Professor& copy);
		~Professor();

		Professor&	operator = (const Professor& assign);

		void	assignCourse(Course* p_course);
		void	doClass();
		void	closeCourse();
		void	requestCourseForm(Headmaster& headmaster);
};

class Secretary : public Staff {
	private:
		CourseFinishedFactory		_courseFinishedFactory;
		NeedMoreClassRoomFactory	_needMoreClassRoomFactory;
		NeedCourseCreationFactory	_needCourseCreationFactory;
		SubscriptionToCourseFactory	_subscritionToCourseFactory;

	public:
		Secretary();
		Secretary(const Secretary& copy);
		~Secretary();

		Secretary&	operator = (const Secretary& assign);

		Form*	createForm(FormType p_formType);
		void	archiveForm();
};
