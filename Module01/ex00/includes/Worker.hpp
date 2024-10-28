#pragma once

#include <iostream>
#include <map>

#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"

class Worker {
	private:
		Position							_coordonnee;
		Statistic							_stat;
		Shovel								*_shovel;
		static std::map<Worker*, Shovel*>	_whoHasTheShovel;

	public:
		Worker();
		Worker(const Worker &copy);
		~Worker();

		Worker & operator = (const Worker &assign);

		// getters
		Position	getCoordonnee() const;
		Statistic	getStat() const;

		void	addShovel(Shovel *shovel);
		void	removeShovel();
};
