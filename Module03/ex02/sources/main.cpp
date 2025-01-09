#include <vector>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"

int	main() {
		std::vector<Shape*>	shapes;
		Rectangle rectangle = Rectangle(5, 3);
		Circle circle = Circle(3);
		Triangle triangle = Triangle(4, 3, 5, 3);

		std::cout << "rectangle" << std::endl;
		std::cout << rectangle.calculateArea() << std::endl;
		std::cout << rectangle.calculatePerimeter() << std::endl;


		std::cout << "circle" << std::endl;
		std::cout << circle.calculateArea() << std::endl;
		std::cout << circle.calculatePerimeter() << std::endl;


		std::cout << "triangle" << std::endl;
		std::cout << triangle.calculateArea() << std::endl;
		std::cout << triangle.calculatePerimeter() << std::endl;


		std::cout << "Liskov Substitution Principle" << std::endl;
		shapes.push_back(&rectangle);
		shapes.push_back(&circle);
		shapes.push_back(&triangle);

		std::cout << rectangle.calculatePerimeter() << std::endl;
		std::cout << circle.calculatePerimeter() << std::endl;
		std::cout << triangle.calculatePerimeter() << std::endl;
		
	return (0);
}
