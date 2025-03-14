#include "Form.hpp"

// Class Form
Form::Form(FormType p_formType) : _formType(p_formType),
	_isSigned(false) {}

Form::Form(const Form& copy) {
	*this = copy;
}

Form::~Form() {}

Form&	Form::operator=(const Form& assign) {
	if (this != &assign) {
		this->_formType = assign._formType;
		this->_isSigned = assign._isSigned;
		this->_whoCreatedForm = assign._whoCreatedForm;
	}
	
	return (*this);
}

FormType&	Form::getFormType() {return (_formType);}

bool	Form::getIsSigned() {return (_isSigned);}

std::string&	Form::getWhoCreatedForm() {return (_whoCreatedForm);}

void	Form::setIsSigned(bool isSigned) {_isSigned = isSigned;}

void	Form::setWhoCreatedForm(const std::string& whoCreatedForm) {_whoCreatedForm = whoCreatedForm;}

// Class CourseFinishedForm
CourseFinishedForm::CourseFinishedForm() : Form(FormType::CourseFinished),
	_receiver(nullptr) {}

CourseFinishedForm::CourseFinishedForm(const CourseFinishedForm& copy) : Form(copy) {
	*this = copy;
}

CourseFinishedForm::~CourseFinishedForm() {}

CourseFinishedForm&	CourseFinishedForm::operator=(const CourseFinishedForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}

void	CourseFinishedForm::execute(Form* p_form) {
	_receiver->executeForm(p_form);
}

// Class NeedCourseCreationForm
NeedCourseCreationForm::NeedCourseCreationForm() : Form(FormType::NeedCourseCreation),
	_receiver(nullptr) {}

NeedCourseCreationForm::NeedCourseCreationForm(const NeedCourseCreationForm& copy) : Form(copy) {
	*this = copy;
}

NeedCourseCreationForm::~NeedCourseCreationForm() {}

NeedCourseCreationForm&	NeedCourseCreationForm::operator=(const NeedCourseCreationForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}

void	NeedCourseCreationForm::execute(Form* p_form) {
	_receiver->executeForm(p_form);
}

// Class NeedMoreClassRoomForm
NeedMoreClassRoomForm::NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom),
	_receiver(nullptr) {}

NeedMoreClassRoomForm::NeedMoreClassRoomForm(const NeedMoreClassRoomForm& copy) : Form(copy) {
	*this = copy;
}

NeedMoreClassRoomForm::~NeedMoreClassRoomForm() {}

NeedMoreClassRoomForm&	NeedMoreClassRoomForm::operator=(const NeedMoreClassRoomForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}


void	NeedMoreClassRoomForm::execute(Form* p_form) {
	_receiver->executeForm(p_form);
}

// Class SubscriptionToCourseForm
SubscriptionToCourseForm::SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse),
	_receiver(nullptr) {}

SubscriptionToCourseForm::SubscriptionToCourseForm(const SubscriptionToCourseForm& copy) : Form(copy) {
	*this = copy;
}

SubscriptionToCourseForm::~SubscriptionToCourseForm() {}

SubscriptionToCourseForm& SubscriptionToCourseForm::operator=(const SubscriptionToCourseForm& assgin) {
	if (this != &assgin)
		this->_receiver = assgin._receiver;

	return (*this);
}

void	SubscriptionToCourseForm::execute(Form* p_form) {
	_receiver->executeForm(p_form);
}
