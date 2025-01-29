#pragma once

#include "Employee.hpp"

class ContractEmployee : public Employee {
	private:
		int	_hourlyValue;

	public:
		ContractEmployee() {}

		ContractEmployee(const ContractEmployee& copy) {
			*this = copy;
		}
		
		virtual ~ContractEmployee() {}

		ContractEmployee&	operator=(const ContractEmployee& assign) {
			(void)assign;

			return (*this);
		}
};
