#include "Person.hpp"
#include "Course.hpp"
#include "Room.hpp"

int	main() {
	{
		Secretary	secretary = Secretary();
		Headmaster headmaster = Headmaster(&secretary);
		Professor	prof = Professor();

		prof.requestCourseForm(headmaster);
	}

	return (0);
}
