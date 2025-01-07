#pragma once

#include <iostream>

class Shape {
	private:

	public:
		Shape() {}

		Shape(const Shape& copy) {
			*this = copy;
		}

		virtual ~Shape() {}

		Shape&	operator=(const Shape& assign) {
			(void)assign;

			return (*this);
		}

		virtual unsigned int	calculateArea() = 0;
		virtual unsigned int	calculatePerimeter() = 0;
};