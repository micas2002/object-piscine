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
Student::Student() : Person(), _form(nullptr) {}

Student::Student(std::string p_name) : Person(p_name) {}

Student::Student(const Student& copy) : Person(copy) {*this = copy;}

Student::~Student() {}

Student&	Student::operator=(const Student& assign) {
	if (this != &assign) {
		this->_subscribedCourse = assign._subscribedCourse;
		this->_form = assign._form;
	}

	return (*this);
}

void	Student::attendClass(Classroom* p_classroom) {(void)p_classroom;}

void	Student::exitClass() {}

void	Student::graduate(Course* p_course) {(void)p_course;}

void	Student::requestForm(FormType type, Headmaster& headmaster) {_form = headmaster.requestForm(type);}

void	Student::requestFormSign(Headmaster& headmaster) {headmaster.signForm(_form);}

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
Headmaster::Headmaster(Secretary* secretary) : _secretary(secretary) {}

Headmaster::Headmaster(const Headmaster& copy) : Staff(copy) {*this = copy;}

Headmaster::~Headmaster() {}

Headmaster&	Headmaster::operator=(const Headmaster& assign) {
	if (this != &assign) {
		this->_formToValidate = assign._formToValidate;
		this->_secretary = assign._secretary;
	}

	return (*this);
}

std::vector<Form*>	Headmaster::getFormsToValidate() {return (_formToValidate);}

void	Headmaster::receiveForm(Form* p_form) {
	if (p_form)
		_formToValidate.push_back(p_form);
}

void	Headmaster::signForm(Form* p_form) {
	if (p_form) {
		p_form->setIsSigned(true);
		executeForm(p_form);
	}
}

void	Headmaster::executeForm(Form* p_form) {
	if (p_form)
		p_form->execute(p_form);
}

Form*	Headmaster::requestForm(FormType type) {
	return (_secretary->createForm(type));
}

// Class Professor
Professor::Professor() : _currentCourse(nullptr), _form(nullptr) {}

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

void	Professor::requestForm(FormType type, Headmaster& headmaster) {
	_form = headmaster.requestForm(type);
}

void	Professor::requestFormSign(Headmaster& headmaster) {
	headmaster.signForm(_form);
}

// Class Secretary
Secretary::Secretary() {
	_courseFinishedFactory = CourseFinishedFactory();
	_needMoreClassRoomFactory = NeedMoreClassRoomFactory();
	_needCourseCreationFactory = NeedCourseCreationFactory();
	_subscritionToCourseFactory = SubscriptionToCourseFactory();
}

Secretary::Secretary(const Secretary& copy) : Staff(copy) {*this = copy;}

Secretary::~Secretary() {}

Secretary&	Secretary::operator=(const Secretary& assign) {
	if (this != &assign) {
		this->_courseFinishedFactory = assign._courseFinishedFactory;
		this->_needMoreClassRoomFactory = assign._needMoreClassRoomFactory;
		this->_needCourseCreationFactory = assign._needCourseCreationFactory;
		this->_subscritionToCourseFactory = assign._subscritionToCourseFactory;
	}

	return (*this);
}

Form*	Secretary::createForm(FormType p_formType) {
	switch (p_formType) {
		case FormType::CourseFinished:
			return _courseFinishedFactory.createForm();
		
		case FormType::NeedMoreClassRoom:
			return _needMoreClassRoomFactory.createForm();
		
		case FormType::NeedCourseCreation:
			return _needCourseCreationFactory.createForm();
		
		case FormType::SubscriptionToCourse:
			return _subscritionToCourseFactory.createForm();
		
		default:
			return (nullptr);
	}
}

void	Secretary::archiveForm() {}
