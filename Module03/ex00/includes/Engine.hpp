#pragma once

#include <iostream>

class Engine {
	private:

	public:
		Engine() {};

		Engine(const Engine& copy) {
			*this = copy;	
		};

		~Engine() {};

		Engine& operator=(const Engine& assign) {
			(void)assign;

			return(*this);
		};

		void	start() {
			std::cout << "The engine started" << std::endl;
		};

		void	stop() {
			std::cout << "The engine stoped" << std::endl;
		};
};
