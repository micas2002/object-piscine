#pragma once

#include <iostream>
#include <Employee.hpp>

class EmployeeManager {
	private:

	public:
		EmployeeManager() {}

		EmployeeManager(const EmployeeManager& copy) {
			*this = copy;
		}
		
		virtual ~EmployeeManager() {}

		EmployeeManager&	operator=(const EmployeeManager& assign) {
			(void)assign;

			return (*this);
		}

		virtual void	addEmployee(Employee*) = 0;
		virtual void	removeEmployee(Employee*) = 0;
		virtual void	executeWorkday() = 0;
		virtual void	calculatePayroll() = 0;
};
