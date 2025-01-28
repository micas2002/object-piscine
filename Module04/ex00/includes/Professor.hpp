#pragma once

#include "Staff.hpp"
#include "Course.hpp"

class Professor : public Staff {
	private:
		Course*	_currentCourse;

	public:
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();

};
