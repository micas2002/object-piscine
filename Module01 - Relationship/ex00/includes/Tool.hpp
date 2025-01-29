#pragma once

#include <iostream>

class Tool {
	private:
		unsigned int	_numberOfUses;

	public:
		Tool();
		Tool(const Tool &copy);
		virtual ~Tool();

		Tool & operator = (const Tool &assign);

		// getters
		int	getNumberOfUses();

		void	addNumberOfUses();
		virtual void	use() = 0;
};
