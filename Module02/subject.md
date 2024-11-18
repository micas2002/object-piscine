```mermaid
classDiagram
	class LinkablePart {
		<<Abstact>>
		execute(float p_pression) void
	}

	class Wheel {
		executeRotation(float p_force) void
	}

	class Gear {
		- Int demultiplier
	}

```