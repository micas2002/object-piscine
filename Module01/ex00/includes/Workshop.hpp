#pragma once

#include <iostream>
#include <set>

#include "Worker.hpp"

class Workshop {
	private:
		std::set<Worker*>	_shopWorkers;

	public:
		Workshop();
		Workshop(const Workshop &copy);
		~Workshop();

		Workshop & operator = (const Workshop & assign);

		void	signUp(Worker *worker);
		void	leaveWorkshop(Worker *worker);
		void	executeWorkDay();
};
