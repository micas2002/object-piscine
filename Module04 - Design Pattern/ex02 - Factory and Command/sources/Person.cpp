#include "Person.hpp"

// Class Person
Person::Person() : _name("Default name"), _currentRoom(nullptr) {}

Person::Person(std::string p_name) : _name(p_name), _currentRoom(nullptr) {}

Person::Person(const Person& copy) {*this = copy;}

Person::~Person() {}

Person&	Person::operator=(const Person& assign) {
	if (this != &assign) {
		this->_name = assign._name;
		this->_currentRoom = assign._currentRoom;
	}

	return (*this);
}

std::string&	Person::getName() {return (_name);}

Room*	Person::room() {return (_currentRoom);}

// Class Student
Student::Student() : Person() {}

Student::Student(std::string p_name) : Person(p_name) {}

Student::Student(const Student& copy) : Person(copy) {*this = copy;}

Student::~Student() {}

Student&	Student::operator=(const Student& assign) {
	if (this != &assign)
		this->_subscribedCourse = assign._subscribedCourse;

	return (*this);
}

void	Student::attendClass(Classroom* p_classroom) {(void)p_classroom;}

void	Student::exitClass() {}

void	Student::graduate(Course* p_course) {(void)p_course;}

// Class Staff
Staff::Staff() : Person() {}

Staff::Staff(std::string p_name) : Person(p_name) {}

Staff::Staff(const Staff& copy) : Person(copy) {*this = copy;}

Staff::~Staff() {}

Staff&	Staff::operator=(const Staff& assign) {
	(void)assign;

	return (*this);
}

void	Staff::sign(Form* p_form) {(void)p_form;}

// Class Headmaster
Headmaster::Headmaster() {}

Headmaster::Headmaster(const Headmaster& copy) : Staff(copy) {*this = copy;}

Headmaster::~Headmaster() {}

Headmaster&	Headmaster::operator=(const Headmaster& assign) {
	if (this != &assign)
		this->_formToValidate = assign._formToValidate;

	return (*this);
}

void	Headmaster::receiveForm(Form* p_form) {(void)p_form;}

// Class Professor
Professor::Professor() : _currentCourse(nullptr) {}

Professor::Professor(const Professor& copy) : Staff(copy) {*this = copy;}

Professor::~Professor() {}

Professor&	Professor::operator=(const Professor& assign) {
	if (this != &assign)
		this->_currentCourse = assign._currentCourse;

	return (*this);
}

void	Professor::assignCourse(Course* p_course) {(void)p_course;}

void	Professor::doClass() {}

void	Professor::closeCourse() {}

// Class Secretary
Secretary::Secretary() {}

Secretary::Secretary(const Secretary& copy) : Staff(copy) {*this = copy;}

Secretary::~Secretary() {}

Secretary&	Secretary::operator=(const Secretary& assign) {
	(void)assign;

	return (*this);
}

Form*	Secretary::createForm(FormType p_formType) {
	switch (p_formType) {
		case FormType::CourseFinished: {
			CourseFinishedFactory courseFinished = CourseFinishedFactory();
			return courseFinished.createForm();
		}
		
		case FormType::NeedMoreClassRoom: {
			NeedMoreClassRoomFactory needMoreClassRoom = NeedMoreClassRoomFactory();
			return needMoreClassRoom.createForm();
		}
		
		case FormType::NeedCourseCreation: {
			NeedCourseCreationFactory needCourseCreation = NeedCourseCreationFactory();
			return needCourseCreation.createForm();
		}
		
		case FormType::SubscriptionToCourse: {
			SubscriptionToCourseFactory subscriptionToCourse = SubscriptionToCourseFactory();
			return subscriptionToCourse.createForm();
		}
		
		default:
			return (nullptr);
	}
}

void	Secretary::archiveForm() {}
