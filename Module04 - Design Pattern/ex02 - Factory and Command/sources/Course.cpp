#include "Course.hpp"

Course::Course() : _name("Default Course name") {}

Course::Course(std::string p_name) : _name(p_name) {}

Course::Course(const Course& copy) {
	*this = copy;
}

Course::~Course() {}

Course&	Course::operator=(const Course& assign) {
	if (this != &assign) {
		this->_name = assign._name;
		this->_responsable = assign._responsable;
		this->_students = assign._students;
		this->_numberOfClassToGraduate = assign._numberOfClassToGraduate;
		this->_maximumNumberOfStudent = assign._maximumNumberOfStudent;
	}

	return (*this);
}

std::string&	Course::getName() {return (_name);}

void	Course::assign(Professor* p_professor) {
	if (p_professor)
		_responsable = p_professor;
}

void	Course::subscribe(Student* p_student) {
	if (p_student)
		_students.push_back(p_student);
}
