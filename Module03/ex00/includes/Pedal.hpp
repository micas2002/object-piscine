#pragma once

#include <iostream>

class Pedal {
	private:

	public:
		Pedal() {};

		Pedal(const Pedal& copy) {
			*this = copy;
		};

		~Pedal() {};

		Pedal&	operator=(const Pedal& assign) {
			(void)assign;

			return(*this);
		}

		void	accelerate(unsigned int speed) {
			std::cout << "Car speed increased by " << speed << " km/h" << std::endl;
		};
};
