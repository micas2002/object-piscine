#pragma once

#include "Shape.hpp"

class Rectangle: public Shape {
	private:
		unsigned int	_height;
		unsigned int	_width;

	public:
		Rectangle(unsigned int height, unsigned int width) : Shape(),
			_height(height), _width(width)  {}

		Rectangle(const Rectangle& copy) : Shape(copy) {
			*this = copy;
		}

		~Rectangle() {}

		Rectangle&	operator=(const Rectangle& assign) {
			if (this != &assign) {
				this->_height = assign._height;
				this->_width = assign._width;
			}

			return (*this);
		}

		unsigned int	calculateArea() {
			return (_height * _width);
		}

		unsigned int	calculatePerimeter() {
			return ((_height * 2) + (_width * 2));
		}
};