#pragma once

#include "FormCommand.hpp"

enum class FormType {
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse
};

class Form {
	private:
		FormType	_formType;
		
	public:
		Form(FormType p_formType);
		Form(const Form& copy);
		~Form();

		Form&	operator = (const Form& assign);

		virtual void	execute() = 0;
};

class CourseFinishedForm : public Form {
	private:
		Receiver&	_receiver;

	public:
		CourseFinishedForm(Receiver& rec);
		CourseFinishedForm(const CourseFinishedForm& copy);
		~CourseFinishedForm();

		CourseFinishedForm&	operator = (const CourseFinishedForm& assign);

		void	execute();
};

class NeedCourseCreationForm : public Form {
	private:
		Receiver&	_receiver;

	public:
		NeedCourseCreationForm(Receiver& rec);
		NeedCourseCreationForm(const NeedCourseCreationForm& copy);
		~NeedCourseCreationForm();

		NeedCourseCreationForm&	operator = (const NeedCourseCreationForm& assign);
	 
		void	execute();
};

class NeedMoreClassRoomForm : public Form {
	private:
		Receiver&	_receiver;

	public:
		NeedMoreClassRoomForm(Receiver& rec);
		NeedMoreClassRoomForm(const NeedMoreClassRoomForm& copy);
		~NeedMoreClassRoomForm();

		NeedMoreClassRoomForm&	operator = (const NeedMoreClassRoomForm& assign);

		void	execute();
};

class SubscriptionToCourseForm : public Form {
	private:
		Receiver&	_receiver;

	public:
		SubscriptionToCourseForm(Receiver& rec);
		SubscriptionToCourseForm(const SubscriptionToCourseForm& copy);
		~SubscriptionToCourseForm();

		SubscriptionToCourseForm&	operator = (const SubscriptionToCourseForm& assign);

		void	execute();
};
