#pragma once

#include <iostream>
#include <map>
#include <set>

#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"

class Worker {
	private:
		Position						_coordonnee;
		Statistic						_stat;
		std::set<Tool*>					_tools;
		static std::map<Tool*, Worker*>	_whoHasTool;

	public:
		Worker();
		Worker(const Worker &copy);
		~Worker();

		Worker & operator = (const Worker &assign);

		// getters
		Position	getCoordonnee() const;
		Statistic	getStat() const;

		void	addTool(Tool *tool);
		void	removeTool(Tool *tool);
		void	work();
};
