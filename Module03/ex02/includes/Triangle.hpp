#pragma once

#include "Shape.hpp"

class Triangle: public Shape {
	private:
		unsigned int	_base;
		unsigned int	_side1;
		unsigned int	_side2;
		unsigned int	_height;

	public:
		Triangle(unsigned int base, unsigned int side1, unsigned int side2, unsigned int height) :
			Shape(), _base(base), _side1(side1), _side2(side2), _height(height) {}

		Triangle(const Triangle& copy) : Shape(copy) {
			*this = copy;
		}

		~Triangle() {}

		Triangle&	operator=(const Triangle& assign) {
			if (this != &assign) {
				this->_base = assign._base;
				this->_side1 = assign._side1;
				this->_side2 = assign._side2;
				this->_height = assign._height;
			}

			return (*this);
		}

		unsigned int	calculateArea() {
			return ((_base * _height) / 2);
		}

		unsigned int	calculatePerimeter() {
			return (_base + _side1 + _side2);
		}
};