#include "Graph.hpp"

Graph::Graph() : _size(Vector2(5.0, 5.0)) {

}

Graph::Graph(float x, float y) : _size(Vector2(x, y)) {

}

Graph::Graph(const Graph &copy) {
	*this = copy;
}

Graph::~Graph() {

}

Graph & Graph::operator=(const Graph &assign) {
	if (this != &assign) {
		_size = assign._size;
		_points = assign._points;
	}
	return(*this);
}

void	Graph::addPoint(float x, float y) {
	if (x > _size.getX() || y > _size.getY())
		throw std::out_of_range("Point outside graph");
	_points.push_back(Vector2(x, y));
}

void	Graph::drawGraph() {
	int size = _size.getY() + 1;
	std::string graph[size];

	std::string cordsMap;
	for (int i = 0; i < _size.getX() + 1; ++i) {
		cordsMap += ". ";
	}
	std::fill(graph, graph + size, cordsMap);

	std::list<Vector2>::iterator it = _points.begin();

	for (; it != _points.end(); ++it)
		graph[(int)it->getY()].replace(it->getX(), 1, "X");
	
	for (size = _size.getY(); size >= 0; --size)
        std::cout << size << " " << graph[size] << std::endl;
    std::cout << "  ";
	for (size = 0; size <= _size.getX(); ++size)
        std::cout << size << " ";
	std::cout << std::endl;
}
