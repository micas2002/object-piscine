#pragma once

#include <iostream>

class ILogger {
	private:
	
	public:
		virtual ~ILogger() {};

		virtual void	write(std::string text) = 0;
};
