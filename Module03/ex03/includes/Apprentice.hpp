#pragma once

#include "Employee.hpp"

class Apprentice : public Employee {
	private:
		int	_hourlyValue;

	public:
		Apprentice() {}

		Apprentice(const Apprentice& copy) {
			*this = copy;
		}
		
		virtual ~Apprentice() {}

		Apprentice&	operator=(const Apprentice& assign) {
			(void)assign;

			return (*this);
		}
};
