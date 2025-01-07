#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"

int	main() {
	{
		Rectangle rectangle = Rectangle(5, 3);

		std::cout << rectangle.calculateArea() << std::endl;
		std::cout << rectangle.calculatePerimeter() << std::endl;
	}

	{
		Circle circle = Circle(3);

		std::cout << circle.calculateArea() << std::endl;
		std::cout << circle.calculatePerimeter() << std::endl;
	}

	{
		Triangle triangle = Triangle(4, 3, 5, 3);

		std::cout << triangle.calculateArea() << std::endl;
		std::cout << triangle.calculatePerimeter() << std::endl;
	}
	return (0);
}
