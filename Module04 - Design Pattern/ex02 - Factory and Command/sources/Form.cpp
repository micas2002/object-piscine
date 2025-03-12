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
CourseFinishedForm::CourseFinishedForm(Receiver& rec) : _receiver(rec) {
	
}

CourseFinishedForm::CourseFinishedForm(const CourseFinishedForm& copy) {
	*this = copy;
}

CourseFinishedForm::~CourseFinishedForm() {

}

CourseFinishedForm&	CourseFinishedForm::operator=(const CourseFinishedForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}

void	CourseFinishedForm::execute() {
	_receiver.executeForm();
}

// Class NeedCourseCreationForm
NeedCourseCreationForm::NeedCourseCreationForm(Receiver& rec) : _receiver(rec) {

}

NeedCourseCreationForm::NeedCourseCreationForm(const NeedCourseCreationForm& copy) {
	*this = copy;
}

NeedCourseCreationForm::~NeedCourseCreationForm() {

}

NeedCourseCreationForm&	NeedCourseCreationForm::operator=(const NeedCourseCreationForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}

void	NeedCourseCreationForm::execute() {
	_receiver.executeForm();
}

// Class NeedMoreClassRoomForm
NeedMoreClassRoomForm::NeedMoreClassRoomForm(Receiver& rec) : _receiver(rec) {

}

NeedMoreClassRoomForm::NeedMoreClassRoomForm(const NeedMoreClassRoomForm& copy) {
	*this = copy;
}

NeedMoreClassRoomForm::~NeedMoreClassRoomForm() {

}

NeedMoreClassRoomForm&	NeedMoreClassRoomForm::operator=(const NeedMoreClassRoomForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}


void	NeedMoreClassRoomForm::execute() {
	_receiver.executeForm();
}

// Class SubscriptionToCourseForm
SubscriptionToCourseForm::SubscriptionToCourseForm(Receiver& rec) : _receiver(rec) {

}

SubscriptionToCourseForm::SubscriptionToCourseForm(const SubscriptionToCourseForm& copy) {
	*this = copy;
}

SubscriptionToCourseForm::~SubscriptionToCourseForm() {

}

SubscriptionToCourseForm& SubscriptionToCourseForm::operator=(const SubscriptionToCourseForm& assgin) {
	if (this != &assgin)
		this->_receiver = assgin._receiver;

	return (*this);
}

void	SubscriptionToCourseForm::execute() {
	_receiver.executeForm();
}
