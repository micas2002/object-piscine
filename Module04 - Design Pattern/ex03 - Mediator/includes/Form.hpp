#pragma once

#include "FormCommand.hpp"
#include "Person.hpp"
#include <iostream>

class Receiver;

enum class FormType {
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse
};

class Form {
	private:
		FormType	_formType;
		bool		_isSigned;
		std::string	_whoCreatedForm;
		
	public:
		Form(FormType p_formType);
		Form(const Form& copy);
		virtual ~Form();

		Form&	operator = (const Form& assign);

		FormType&		getFormType();
		bool			getIsSigned();
		std::string&	getWhoCreatedForm();

		void	setIsSigned(bool isSigned);
		void	setWhoCreatedForm(const std::string& _whoCreatedForm);

		virtual void	execute(Form* p_form) = 0;
};

class CourseFinishedForm : public Form {
	private:
		Receiver*	_receiver;

	public:
		CourseFinishedForm();
		CourseFinishedForm(const CourseFinishedForm& copy);
		virtual ~CourseFinishedForm();

		CourseFinishedForm&	operator = (const CourseFinishedForm& assign);

		void	execute(Form* p_form);
};

class NeedCourseCreationForm : public Form {
	private:
		Receiver*				_receiver;
		std::string				_name;
		Professor*				_professor;
		std::vector<Student*>	_students;
		int						_numberOfClassToGraduate;
		int						_maximumNumberIfStudents;

	public:
		NeedCourseCreationForm();
		NeedCourseCreationForm(const NeedCourseCreationForm& copy);
		virtual ~NeedCourseCreationForm();

		NeedCourseCreationForm&	operator = (const NeedCourseCreationForm& assign);
	 
		void	setName(std::string& name);
		void	setProfessor(Professor* prof);

		std::string&	getName();
		Professor*	getProfessor();

		void	execute(Form* p_form);
};

class NeedMoreClassRoomForm : public Form {
	private:
		Receiver*	_receiver;

	public:
		NeedMoreClassRoomForm();
		NeedMoreClassRoomForm(const NeedMoreClassRoomForm& copy);
		virtual ~NeedMoreClassRoomForm();

		NeedMoreClassRoomForm&	operator = (const NeedMoreClassRoomForm& assign);

		void	execute(Form* p_form);
};

class SubscriptionToCourseForm : public Form {
	private:
		Receiver*	_receiver;

	public:
		SubscriptionToCourseForm();
		SubscriptionToCourseForm(const SubscriptionToCourseForm& copy);
		virtual ~SubscriptionToCourseForm();

		SubscriptionToCourseForm&	operator = (const SubscriptionToCourseForm& assign);

		void	execute(Form* p_form);
};
