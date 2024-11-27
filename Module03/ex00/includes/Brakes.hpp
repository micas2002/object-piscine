#pragma once

#include <iostream>

class Brakes {
	private:

	public:
		Brakes() {};

		Brakes(const Brakes& copy) {
			*this = copy;
		}

		~Brakes() {};

		Brakes&	operator=(const Brakes& assign) {
			(void)assign;

			return(*this);
		}

		void	apply_force_on_brakes(unsigned int force) {
			std::cout << "The brakes were pressed with "  << force << "N of force" << std::endl;
		}

		void	apply_emergency_brakes() {
			std::cout << "The brakes were pressed with maximum force" << std::endl;
		}

};
