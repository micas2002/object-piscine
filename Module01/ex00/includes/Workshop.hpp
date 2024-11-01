#pragma once

#include <iostream>
#include <list>

#include "Worker.hpp"

class Workshop {
	private:
		std::list<Worker*>	_shopWorkers;

	public:
		Workshop();
		Workshop(const Workshop &copy);
		~Workshop();

		Workshop & operator = (const Workshop & assign);

		void	signUp(Worker *worker);
		void	leaveWorkshop(Worker *worker);
};
