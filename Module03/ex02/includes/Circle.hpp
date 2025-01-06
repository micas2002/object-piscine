#pragma once

#include "Shape.hpp"
#include <math.h>

class Circle: private Shape {
	private:
		unsigned int	_radius;

	public:
		Circle() : Shape() {}

		Circle(const Circle& copy) : Shape(copy) {
			*this = copy;
		}

		~Circle() {}

		Circle&	operator=(const Circle& assign) {
			(void)assign;

			return (*this);
		}

		unsigned int	calculateArea(const Shape& shape) {
			return (3.14 * pow(_radius, 2));
		}

		unsigned int	calculatePerimeter(const Shape& shape) {
			return (2 * 3.14 * _radius);
		}
};