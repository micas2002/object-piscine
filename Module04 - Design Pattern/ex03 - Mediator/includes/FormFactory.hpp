#pragma once

#include "Form.hpp"

class FormFactory {
	private:

	public:
		virtual ~FormFactory();

		virtual Form*	createForm() = 0;
};

class CourseFinishedFactory : public FormFactory {
	private:
	
	public:
		CourseFinishedFactory();
		CourseFinishedFactory(const CourseFinishedFactory& copy);
		virtual ~CourseFinishedFactory();

		CourseFinishedFactory&	operator = (const CourseFinishedFactory& assign);

		virtual Form*	createForm();
};

class NeedMoreClassRoomFactory : public FormFactory {
	private:
	
	public:
		NeedMoreClassRoomFactory();
		NeedMoreClassRoomFactory(const NeedMoreClassRoomFactory& copy);
		virtual ~NeedMoreClassRoomFactory();

		NeedMoreClassRoomFactory&	operator = (const NeedMoreClassRoomFactory& assign);

		virtual Form*	createForm();
};

class NeedCourseCreationFactory : public FormFactory {
	private:
	
	public:
		NeedCourseCreationFactory();
		NeedCourseCreationFactory(const NeedCourseCreationFactory& copy);
		virtual ~NeedCourseCreationFactory();

		NeedCourseCreationFactory&	operator = (const NeedCourseCreationFactory& assign);

		virtual Form*	createForm();
};

class SubscriptionToCourseFactory : public FormFactory {
	private:
	
	public:
		SubscriptionToCourseFactory();
		SubscriptionToCourseFactory(const SubscriptionToCourseFactory& copy);
		virtual ~SubscriptionToCourseFactory();

		SubscriptionToCourseFactory&	operator = (const SubscriptionToCourseFactory& assign);

		virtual Form*	createForm();
};
