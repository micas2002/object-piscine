#include "Person.hpp"
#include "Course.hpp"
#include "Room.hpp"

int	main() {
	{
		Secretary	secretary = Secretary();
		Form*	form = secretary.createForm(FormType::CourseFinished);
	
		form->setWhoCreatedForm("John");
	
		Headmaster headmaster = Headmaster();
	
		headmaster.signForm(form);
		delete form;
	}

	{
		Secretary	secretary = Secretary();
		Form*	form = secretary.createForm(FormType::NeedMoreClassRoom);
	
		form->setWhoCreatedForm("Carl");
	
		Headmaster headmaster = Headmaster();
	
		headmaster.signForm(form);
		delete form;
	}

	{
		Secretary	secretary = Secretary();
		Form*	form = secretary.createForm(FormType::NeedMoreClassRoom);
	
		form->setWhoCreatedForm("Tony");
	
		form->execute(form);
		delete form;
	}

	{
		Secretary	secretary = Secretary();
		Form*	form1 = secretary.createForm(FormType::CourseFinished);
		Form*	form2 = secretary.createForm(FormType::NeedMoreClassRoom);
		Form*	form3 = secretary.createForm(FormType::NeedCourseCreation);
		Form*	form4 = secretary.createForm(FormType::SubscriptionToCourse);
	
		form1->setWhoCreatedForm("Amanda");
		form2->setWhoCreatedForm("Carl");
		form3->setWhoCreatedForm("Peter");
		form4->setWhoCreatedForm("Sofia");
	
		Headmaster headmaster = Headmaster();
	
		headmaster.receiveForm(form1);
		headmaster.receiveForm(form2);
		headmaster.receiveForm(form3);
		headmaster.receiveForm(form4);

		for (auto i: headmaster.getFormsToValidate())
			headmaster.signForm(i);

		delete form1;
		delete form2;
		delete form3;
		delete form4;
	}
	return (0);
}
