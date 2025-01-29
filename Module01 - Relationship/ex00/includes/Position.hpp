#pragma once

#include <iostream>

struct Position
{
	int	x;
	int	y;
	int	z;

	Position();
	Position(const Position &copy);
	~Position();

	Position & operator = (const Position &assign);
};
