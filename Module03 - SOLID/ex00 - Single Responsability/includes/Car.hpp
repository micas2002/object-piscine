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
		Brakes		_brakes;

	public:
		Car() {};

		Car(const Car& copy) {
			*this = copy;
		};

		~Car() {};

		Car& operator = (const Car& assign) {
			if (this != &assign) {
				_engine = assign._engine;
				_pedal = assign._pedal;
				_gearLever = assign._gearLever;
				_steerWheel = assign._steerWheel;
				_brakes = assign._brakes;
			}

			return (*this);
		};

		Engine		getEngine() {
			return (_engine);
		};

		Pedal		getPedal() {
			return (_pedal);
		};

		GearLever	getGearLever() {
			return (_gearLever);
		};

		SteerWheel	getSteerWheel() {
			return (_steerWheel);
		};

		Brakes		getBrakes() {
			return (_brakes);
		};

};
