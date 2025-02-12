#include "SingletonClass.hpp"
#include "Person.hpp"
#include "Course.hpp"
#include "Room.hpp"

int	main() {
	{
		SingletonClass<Student>* StudentList = SingletonClass<Student>::getSingletonInstance();
		Student	student1 = Student("student1");
		Student	student2 = Student("student2");
		Student	student3 = Student("student3");

		StudentList->addNewElement(&student1);
		StudentList->addNewElement(&student2);
		StudentList->addNewElement(&student3);

		std::list<Student*>	list = StudentList->getElements();

		for (auto v : list)
	        std::cout << v->getName() << "\n";

		StudentList->removeElement(&student1);
		StudentList->removeElement(&student2);
		StudentList->removeElement(&student3);
	}

	{
		SingletonClass<Staff>* StaffList = SingletonClass<Staff>::getSingletonInstance();
		Staff staff1 = Staff("staff1");
		Staff staff2 = Staff("staff2");
		Staff staff3 = Staff("staff3");

		StaffList->addNewElement(&staff1);
		StaffList->addNewElement(&staff2);
		StaffList->addNewElement(&staff3);

		std::list<Staff*>	list = StaffList->getElements();

		for (auto v : list)
	        std::cout << v->getName() << "\n";

		StaffList->removeElement(&staff1);
		StaffList->removeElement(&staff2);
		StaffList->removeElement(&staff3);
	}

	{
		SingletonClass<Course>* CourseList = SingletonClass<Course>::getSingletonInstance();
		Course course1 = Course("course1");
		Course course2 = Course("course2");
		Course course3 = Course("course3");

		CourseList->addNewElement(&course1);
		CourseList->addNewElement(&course2);
		CourseList->addNewElement(&course3);

		std::list<Course*>	list = CourseList->getElements();

		for (auto v : list)
	        std::cout << v->getName() << "\n";

		CourseList->removeElement(&course1);
		CourseList->removeElement(&course2);
		CourseList->removeElement(&course3);
	}

	{
		SingletonClass<Room>* RoomList = SingletonClass<Room>::getSingletonInstance();
		Room room1 = Room(1);
		Room room2 = Room(2);
		Room room3 = Room(3);

		RoomList->addNewElement(&room1);
		RoomList->addNewElement(&room2);
		RoomList->addNewElement(&room3);

		std::list<Room*>	list = RoomList->getElements();

		for (auto v : list)
	        std::cout << v->getID() << "\n";

		RoomList->removeElement(&room1);
		RoomList->removeElement(&room2);
		RoomList->removeElement(&room3);
	}
	
}
