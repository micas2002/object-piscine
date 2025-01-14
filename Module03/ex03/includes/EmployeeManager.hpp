#pragma once

#include <iostream>
#include <Employee.hpp>
#include <set>

class EmployeeManager {
	private:
		std::set<Employee*>	_employees;

	public:
		EmployeeManager() {}

		EmployeeManager(const EmployeeManager& copy) {
			*this = copy;
		}
		
		~EmployeeManager() {}

		EmployeeManager&	operator=(const EmployeeManager& assign) {
			(void)assign;

			return (*this);
		}

		void	addEmployee(Employee* employee) {
			_employees.insert(employee);
		};

		void	removeEmployee(Employee* employee) {
			_employees.erase(employee);
		};

		void	executeWorkday() {
			std::set<Employee*>::iterator it = _employees.begin();

			for (; it != _employees.end(); ++it)
				(*it)->executeWorkday();
		};

		void	calculatePayroll();
};
