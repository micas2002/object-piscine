#include "FormCommand.hpp"

Receiver::Receiver() {}

Receiver::~Receiver() {}

void	Receiver::executeForm(Form* p_form) {
	if (p_form->getIsSigned() == false || p_form->getWhoCreatedForm() == "") {
		std::cout << "Form can't be executed, it has not been signed by the Headmaster!" << std::endl;
		return;
	}

	if (p_form->getWhoCreatedForm() != "Carl")
		std::cout << "The form is being executed." << std::endl;
	else
		std::cout << "Carl created this form, it must be important!" << std::endl;
}
