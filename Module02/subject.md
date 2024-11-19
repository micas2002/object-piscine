```mermaid
classDiagram
	Car <|-- BrakeController
	Car <|-- Direction
	Car <|-- Transmission
	Car <|-- Motor
	Car <|-- Eletronics
	Car <|-- Cockpit
	class Car {
		- BrakeController brakeController
		- Direction direction
		- Transmission transmission
		- Motor motor
		- Electronics electronics
		- Cockpit cockpit
	}

	Direction <|-- Wheel
	class Direction {
		- Wheel[] wheels

		+ turn(float p_angle) void
	}

	Transmission <|-- Wheel
	class Transmission {
		- std::vector~Wheel*~ wheels

		+ activate(float p_force) void
	}

	Motor <|-- Injector
	Motor <|-- ExplosionChamber
	Motor <|-- Crankshaft
	class Motor {
		- Injector injector
		- ExplosionChamber explosionChamber
		- Crankshaft crankshaft

		+ connectToTransmission(Transmission* p_transmissio) void
	}

	class Injector {
		- ExplosionChamber** explosionChamber

		+ execute(float p_pression) void
	}

	class ExplosionChamber {
		- Crankshaft** crankshaft

		+ fill(float p_volume) void
	}

	class Crankshaft {
		- Transmission** transmission

		+ receiveForce(float p_volume) void
	}

	Eletronics <|-- DAE
	class Eletronics {
		- DAE dae
	}

	DAE <|-- Direction
	class DAE {
		- Direction* direction
		- float force

		+ use(float p_angle) void
	}

	Cockpit <|-- Pedal
	Cockpit <|-- SteerWheel
	Cockpit <|-- GearLever
	class Cockpit {
		- Pedal pedal
		- SteerWheel steerWheel
		- GearLever gearLever

		+ managePedal() void
		+ manageSteerWheel() void
		+ manageGearlever() void
	}

	Pedal <|-- LinkablePart
	class Pedal {
		- LinkablePart* linkablePart

		+ setTarget(LinkablePart* p_part) void
		+ use(float p_pressure) void
	}

	BrakeController <|-- Brake
	class BrakeController {
		- Brake[] brakes

		+ execute(float p_pressure) void
	}

	Brake <|-- Wheel
	class Brake {
		- Wheel* wheel

		+ execute(float p_force) void
		+ attackWheel(Wheel* p_wheel) void
	}

	class Wheel {
		+ executeRotation(float p_force) void
	}

	SteerWheel <|-- DAE
	class SteerWheel {
		- DAE* dae

		+ turn(float p_angle) void
	}

	GearLever <|-- Gear
	class GearLever {
		- Gear[] gears
		- Int level

		+ change() void
		+ activeGear() Gear**
	}

	class Gear {
		- Int demultiplier
	}

	LinkablePart <|.. BrakeController
	LinkablePart <|.. Injector
	class LinkablePart {
		<<Abstract>>
		+ execute(float p_pression) void
	}

```