#include "Vector2.hpp"

Vector2::Vector2() : _x(0), _y(0) {

}

Vector2::Vector2(float x, float y) : _x(x), _y(y) {

}

Vector2::Vector2(const Vector2 &copy) {
	*this = copy;	
}

Vector2::~Vector2() {

}

Vector2	& Vector2::operator=(const Vector2 &assign) {
	if (this != &assign) {
		_x = assign._x;
		_y = assign._y;
	}
	return (*this);
}

float	Vector2::getX() const {
	return (_x);
}

float	Vector2::getY() const {
	return (_y);
}

void	Vector2::setX(const unsigned int x) {
	_x = x;
}

void	Vector2::setY(const unsigned int y) {
	_y = y;
}
