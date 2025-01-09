#pragma once

#include "Employee.hpp"

class TempWorker : public Employee {
	private:
		int	_hourlyValue;

	public:
		TempWorker() {}

		TempWorker(const TempWorker& copy) {
			*this = copy;
		}
		
		virtual ~TempWorker() {}

		TempWorker&	operator=(const TempWorker& assign) {
			(void)assign;

			return (*this);
		}
};
