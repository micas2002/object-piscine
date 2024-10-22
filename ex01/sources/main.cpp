#include "Vector2.hpp"
#include "Graph.hpp"

int	main() {
	try {
		Graph	graph = Graph(5, 5);

		graph.addPoint(0, 0);
		graph.addPoint(2, 2);
		graph.addPoint(4, 2);
		graph.addPoint(2, 4);

		graph.drawGraph();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----------------" << std::endl;

	try {
		Graph	graph = Graph(10, 7);

		graph.addPoint(1, 0);
		graph.addPoint(9, 2);
		graph.addPoint(4, 5);
		graph.addPoint(4, 4);

		graph.drawGraph();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}