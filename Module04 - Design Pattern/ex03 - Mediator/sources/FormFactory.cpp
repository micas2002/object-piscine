#include "FormFactory.hpp"

// FormFactory class
FormFactory::~FormFactory() {}

// CourseFinishedFactory class
CourseFinishedFactory::CourseFinishedFactory() {}

CourseFinishedFactory::CourseFinishedFactory(const CourseFinishedFactory& copy) {
	*this = copy;
}

CourseFinishedFactory::~CourseFinishedFactory() {}

CourseFinishedFactory&	CourseFinishedFactory::operator=(const CourseFinishedFactory& assign) {
	(void)assign;
	return (*this);
}

Form*	CourseFinishedFactory::createForm() {return new CourseFinishedForm();}

// NeedMoreClassRoomFactory class
NeedMoreClassRoomFactory::NeedMoreClassRoomFactory() {}

NeedMoreClassRoomFactory::NeedMoreClassRoomFactory(const NeedMoreClassRoomFactory& copy) {
	*this = copy;
}

NeedMoreClassRoomFactory::~NeedMoreClassRoomFactory() {}

NeedMoreClassRoomFactory&	NeedMoreClassRoomFactory::operator=(const NeedMoreClassRoomFactory& assign) {
	(void)assign;
	return (*this);
}

Form*	NeedMoreClassRoomFactory::createForm() {return new NeedMoreClassRoomForm();}

// NeedCourseCreationFactory class
NeedCourseCreationFactory::NeedCourseCreationFactory() {}

NeedCourseCreationFactory::NeedCourseCreationFactory(const NeedCourseCreationFactory& copy) {
	*this = copy;
}

NeedCourseCreationFactory::~NeedCourseCreationFactory() {}

NeedCourseCreationFactory&	NeedCourseCreationFactory::operator=(const NeedCourseCreationFactory& assign) {
	(void)assign;
	return (*this);
}

Form*	NeedCourseCreationFactory::createForm() {return new NeedCourseCreationForm();}

// SubscriptionToCourseFactory class
SubscriptionToCourseFactory::SubscriptionToCourseFactory() {}

SubscriptionToCourseFactory::SubscriptionToCourseFactory(const SubscriptionToCourseFactory& copy) {
	*this = copy;
}

SubscriptionToCourseFactory::~SubscriptionToCourseFactory() {}

SubscriptionToCourseFactory&	SubscriptionToCourseFactory::operator=(const SubscriptionToCourseFactory& assign) {
	(void)assign;
	return (*this);
}

Form*	SubscriptionToCourseFactory::createForm() {return new SubscriptionToCourseForm();}
