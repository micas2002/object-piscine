#include "FormCommand.hpp"

Receiver::Receiver() {}

Receiver::~Receiver() {}

void	Receiver::executeNeedCourseCreationForm(NeedCourseCreationForm* p_form) {
	if (p_form->getIsSigned() == false || p_form->getWhoCreatedForm() == "") {
		std::cout << "Form can't be executed, it has not been signed by the Headmaster!" << std::endl;
		return;
	}

	Course course = Course();

	course.setName(p_form->getName());
	course.assign(p_form->getProfessor());
	p_form->getProfessor()->assignCourse(&course);
}
