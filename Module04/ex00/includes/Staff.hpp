#pragma once

#include "Person.hpp"
#include "Form.hpp"

class Staff : public Person {
	private:

	public:
		void	sign(Form* p_form);
};
