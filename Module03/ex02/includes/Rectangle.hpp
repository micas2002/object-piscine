#pragma once

#include "Shape.hpp"

class Rectangle: private Shape {
	private:
		unsigned int	_height;
		unsigned int	_width;

	public:
		Rectangle() : Shape() {}

		Rectangle(const Rectangle& copy) : Shape(copy) {
			*this = copy;
		}

		~Rectangle() {}

		Rectangle&	operator=(const Rectangle& assign) {
			(void)assign;

			return (*this);
		}

		unsigned int	calculateArea(const Shape& shape) {
			return (_height * _width);
		}

		unsigned int	calculatePerimeter(const Shape& shape) {
			return ((_height * 2) + (_width * 2));
		}
};