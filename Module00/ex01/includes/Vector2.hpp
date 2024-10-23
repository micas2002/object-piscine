#pragma once

#include <iostream>

class Vector2 {
	private:
		float	_x;
		float	_y;

	public :
		Vector2();
		Vector2(float x, float y);
		Vector2(const Vector2 &copy);
		~Vector2();

		Vector2 & operator = (const Vector2 &assign);

		// getters
		float	getX() const;
		float	getY() const;

		//setters
		void	setX(const unsigned int x);
		void	setY(const unsigned int y);

};


