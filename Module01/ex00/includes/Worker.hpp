#pragma once

#include <iostream>

#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"

class Worker {
	private:
		Position	_coordonnee;
		Statistic	_stat;
		Shovel		*_shovel;

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
