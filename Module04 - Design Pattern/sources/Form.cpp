#include "Form.hpp"

// Class Form
Form::Form(FormType p_formType) : _formType(p_formType) {

}

Form::Form(const Form& copy) {
	*this = copy;
}

Form::~Form() {

}

Form&	Form::operator=(const Form& assign) {
	if (this != &assign)
		this->_formType = assign._formType;
	
	return (*this);
}

// Class CourseFinishedForm
CourseFinishedForm::CourseFinishedForm() {
	
}

CourseFinishedForm::CourseFinishedForm(const CourseFinishedForm& copy) {
	*this = copy;
}

CourseFinishedForm::~CourseFinishedForm() {

}

CourseFinishedForm&	CourseFinishedForm::operator=(const CourseFinishedForm& assign) {
	(void)assign;

	return (*this);
}

void	CourseFinishedForm::execute() {

}

// Class NeedCourseCreationForm
NeedCourseCreationForm::NeedCourseCreationForm() {

}

NeedCourseCreationForm::NeedCourseCreationForm(const NeedCourseCreationForm& copy) {
	*this = copy;
}

NeedCourseCreationForm::~NeedCourseCreationForm() {

}

NeedCourseCreationForm&	NeedCourseCreationForm::operator=(const NeedCourseCreationForm& assign) {
	(void)assign;

	return (*this);
}

void	NeedCourseCreationForm::execute() {

}

// Class NeedMoreClassRoomForm
NeedMoreClassRoomForm::NeedMoreClassRoomForm() {

}

NeedMoreClassRoomForm::NeedMoreClassRoomForm(const NeedMoreClassRoomForm& copy) {
	*this = copy;
}

NeedMoreClassRoomForm::~NeedMoreClassRoomForm() {

}

NeedMoreClassRoomForm&	NeedMoreClassRoomForm::operator=(const NeedMoreClassRoomForm& assign) {
	(void)assign;

	return (*this);
}


void	NeedMoreClassRoomForm::execute() {

}

// Class SubscriptionToCourseForm
SubscriptionToCourseForm::SubscriptionToCourseForm() {

}

SubscriptionToCourseForm::SubscriptionToCourseForm(const SubscriptionToCourseForm& copy) {
	*this = copy;
}

SubscriptionToCourseForm::~SubscriptionToCourseForm() {

}

SubscriptionToCourseForm& SubscriptionToCourseForm::operator=(const SubscriptionToCourseForm& assgin) {
	(void)this;

	return (*this);
}

void	SubscriptionToCourseForm::execute() {

}
