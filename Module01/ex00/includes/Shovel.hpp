#pragma once

#include "Tool.hpp"

struct Shovel : public Tool
{
	Shovel();
	Shovel(const Shovel &copy);
	~Shovel();

	Shovel & operator = (const Shovel &assign);

	void	use();
};
