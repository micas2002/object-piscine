#pragma once

#include <iostream>

class GearLever {
	private:

	public:
		GearLever() {};

		GearLever(const GearLever& copy) {
			*this = copy;
		}

		~GearLever() {};

		GearLever&	operator=(const GearLever& assign) {
			(void)assign;

			return(*this);
		}

		void	shift_gears_up() {
			std::cout << "The gear was shifted up" << std::endl;
		};

		void	shift_gears_down() {
			std::cout << "The gear was shifted down" << std::endl;
		};

		void	reverse() {
			std::cout << "The gear was shifted to reverse" << std::endl;
		}
};
