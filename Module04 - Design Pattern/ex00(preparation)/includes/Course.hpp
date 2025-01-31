#pragma once

#include "Person.hpp"
#include <iostream>
#include <vector>

class Course {
	private:
		std::string				_name;
		Professor*				_responsable;
		std::vector<Student*>	_students;
		int						_numberOfClassToGraduate;
		int						_maximumNumberOfStudent;

	public:
		Course(std::string p_name);
		Course(const Course& copy);
		~Course();

		Course&	operator = (const Course& assign);

		void assign(Professor* p_professor);
		void subscribe(Student*	p_student);
};
