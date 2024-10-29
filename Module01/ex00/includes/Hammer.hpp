#pragma once

#include "Tool.hpp"

class Hammer : public Tool {
	private:

	public:
		Hammer();
		Hammer(const Hammer &copy);
		~Hammer();

		Hammer & operator = (const Hammer &assign);

		void	use();
};
