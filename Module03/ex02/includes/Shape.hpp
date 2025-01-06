#pragma once

#include <iostream>

class Shape {
	private:

	public:
		Shape() {}

		Shape(const Shape& copy) {
			*this = copy;
		}

		~Shape() {}

		Shape&	operator=(const Shape& assign) {
			(void)assign;

			return (*this);
		}

		virtual unsigned int	calculateArea(const Shape& shape);
		virtual unsigned int	calculatePerimeter(const Shape& shape);
};