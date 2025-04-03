#pragma once

#include "Form.hpp"
#include <iostream>

class Form;

class Receiver {
	private:
	
	public:
		Receiver();
		~Receiver();

		void	executeNeedCourseCreationForm(NeedCourseCreationForm* p_form);
};
