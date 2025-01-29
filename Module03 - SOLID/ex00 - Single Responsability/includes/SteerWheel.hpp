#pragma once

#include <iostream>

class SteerWheel {
	private:

	public:
		SteerWheel() {};

		SteerWheel(const SteerWheel& copy) {
			*this = copy;
		}

		~SteerWheel() {};

		SteerWheel&	operator=(const SteerWheel& assign) {
			(void)assign;

			return(*this);
		}

		void	turn_wheel(int angle) {
			std::cout << "The wheels were turned by " << angle << " degrees" << std::endl;
		}

		void	straighten_wheels() {
			std::cout << "The wheels returned to the straight-ahead position" << std::endl;
		}
};
