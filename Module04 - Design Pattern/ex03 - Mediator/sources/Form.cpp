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
CourseFinishedForm::CourseFinishedForm() : Form(FormType::CourseFinished) {
	_receiver = new Receiver();
}

CourseFinishedForm::CourseFinishedForm(const CourseFinishedForm& copy) : Form(copy) {
	*this = copy;
}

CourseFinishedForm::~CourseFinishedForm() {
	delete _receiver;
}

CourseFinishedForm&	CourseFinishedForm::operator=(const CourseFinishedForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}

void	CourseFinishedForm::execute(Form* p_form) {
	_receiver->executeForm(p_form);
}

// Class NeedCourseCreationForm
NeedCourseCreationForm::NeedCourseCreationForm() : Form(FormType::NeedCourseCreation) {
	_receiver = new Receiver();
}

NeedCourseCreationForm::NeedCourseCreationForm(const NeedCourseCreationForm& copy) : Form(copy) {
	*this = copy;
}

NeedCourseCreationForm::~NeedCourseCreationForm() {
	delete _receiver;
}

NeedCourseCreationForm&	NeedCourseCreationForm::operator=(const NeedCourseCreationForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}

void	NeedCourseCreationForm::setName(std::string& name) {_name = name;}

void	NeedCourseCreationForm::setProfessor(Professor* prof) {_professor = prof;}

void	NeedCourseCreationForm::execute(Form* p_form) {
	_receiver->executeNeedCourseCreationForm(dynamic_cast<NeedCourseCreationForm*>(p_form));
}

// Class NeedMoreClassRoomForm
NeedMoreClassRoomForm::NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom) {
	_receiver = new Receiver();
}

NeedMoreClassRoomForm::NeedMoreClassRoomForm(const NeedMoreClassRoomForm& copy) : Form(copy) {
	*this = copy;
}

NeedMoreClassRoomForm::~NeedMoreClassRoomForm() {
	delete _receiver;
}

NeedMoreClassRoomForm&	NeedMoreClassRoomForm::operator=(const NeedMoreClassRoomForm& assign) {
	if (this != &assign)
		this->_receiver = assign._receiver;

	return (*this);
}

std::string&	NeedCourseCreationForm::getName() {return (_name);}

Professor*	NeedCourseCreationForm::getProfessor() {return (_professor);}

void	NeedMoreClassRoomForm::execute(Form* p_form) {
	_receiver->executeForm(p_form);
}

// Class SubscriptionToCourseForm
SubscriptionToCourseForm::SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse) {
	_receiver = new Receiver();
}

SubscriptionToCourseForm::SubscriptionToCourseForm(const SubscriptionToCourseForm& copy) : Form(copy) {
	*this = copy;
}

SubscriptionToCourseForm::~SubscriptionToCourseForm() {
	delete _receiver;
}

SubscriptionToCourseForm& SubscriptionToCourseForm::operator=(const SubscriptionToCourseForm& assgin) {
	if (this != &assgin)
		this->_receiver = assgin._receiver;

	return (*this);
}

void	SubscriptionToCourseForm::execute(Form* p_form) {
	_receiver->executeForm(p_form);
}
