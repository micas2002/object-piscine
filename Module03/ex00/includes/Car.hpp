#pragma once

#include <iostream>
#include "Engine.hpp"
#include "Pedal.hpp"
#include "GearLever.hpp"
#include "SteerWheel.hpp"
#include "Brakes.hpp"

class Car {
	private:
		Engine		_engine;
		Pedal		_pedal;
		GearLever	_gearLever;
		SteerWheel	_steerWheel;
		Brakes		_brake;

	public:
		Car() {};

		Car(const Car& copy) {
			*this = copy;
		};

		~Car() {};

		Car& operator = (const Car& assign) {
			(void)assign;

			return (*this);
		};

};
