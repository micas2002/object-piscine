#include "Brakes.hpp"
#include "Car.hpp"
#include "Engine.hpp"
#include "GearLever.hpp"
#include "Pedal.hpp"
#include "SteerWheel.hpp"

int	main() {
	Car car = Car();

	car.getEngine().start();
	car.getEngine().stop();

	car.getPedal().accelerate(50);
	car.getPedal().accelerate(120);

	car.getGearLever().shift_gears_up();
	car.getGearLever().shift_gears_down();
	car.getGearLever().reverse();

	car.getSteerWheel().turn_wheel(25);
	car.getSteerWheel().turn_wheel(150);
	car.getSteerWheel().turn_wheel(-50);

	car.getBrakes().apply_force_on_brakes(26);
	car.getBrakes().apply_force_on_brakes(65);
	car.getBrakes().apply_emergency_brakes();
	
	return (0);
}
