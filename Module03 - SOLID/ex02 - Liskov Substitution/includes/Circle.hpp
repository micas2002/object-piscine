#pragma once

#include "Shape.hpp"
#include <math.h>

class Circle: public Shape {
	private:
		unsigned int	_radius;

	public:
		Circle(unsigned int radius) : Shape(), _radius(radius) {}

		Circle(const Circle& copy) : Shape(copy) {
			*this = copy;
		}

		~Circle() {}

		Circle&	operator=(const Circle& assign) {
			if (this != &assign)
				this->_radius = assign._radius;

			return (*this);
		}

		unsigned int	calculateArea() {
			return (3.14 * pow(_radius, 2));
		}

		unsigned int	calculatePerimeter() {
			return (2 * 3.14 * _radius);
		}
};