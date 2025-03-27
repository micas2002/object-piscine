#pragma once

#include "Form.hpp"
#include "Person.hpp"

class MediatorHeadmaster {
	private:

	public:
		virtual ~MediatorHeadmaster() {};
		virtual Form*	requestForm(FormType type) = 0;
};

class IProfessor {
	private:

	public:
		virtual ~IProfessor() {};
		virtual void	requestForm(FormType type, Headmaster& headmaster) = 0;
		virtual void	requestFormSign(Headmaster& Headmaster) = 0;
};

class IStudent {
	private:

	public:
		virtual ~IStudent() {};
		virtual void	requestForm(FormType type, Headmaster& headmaster) = 0;
		virtual void	requestFormSign(Headmaster& Headmaster) = 0;
};
