#pragma once

#include <iostream>

class Employee {
	private:
		int	_hourlyValue;

	public:
		Employee() {}

		Employee(const Employee& copy) {
			*this = copy;
		}
		
		virtual ~Employee() {}

		Employee&	operator=(const Employee& assign) {
			(void)assign;

			return (*this);
		}

		int	executeWorkday();
};
