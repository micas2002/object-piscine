#pragma once

#include "Shape.hpp"

class Triangle: private Shape {
	private:
		unsigned int	_base;
		unsigned int	_side1;
		unsigned int	_side2;
		unsigned int	_height;

	public:
		Triangle() : Shape() {}

		Triangle(const Triangle& copy) : Shape(copy) {
			*this = copy;
		}

		~Triangle() {}

		Triangle&	operator=(const Triangle& assign) {
			(void)assign;

			return (*this);
		}

		unsigned int	calculateArea(const Shape& shape) {
			return ((_base * _height) / 2);
		}

		unsigned int	calculatePerimeter(const Shape& shape) {
			return (_base + _side1 + _side2);
		}
};