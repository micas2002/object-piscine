#pragma once

#include <iostream>

struct Statistic
{
	int	level;
	int	exp;

	Statistic();
	Statistic(const Statistic &copy);
	~Statistic();

	Statistic & operator = (const Statistic &assign);
};
