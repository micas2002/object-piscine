#pragma once

#include <iostream>
#include <list>
#include <algorithm>
#include <Vector2.hpp>

class Graph {
	private:
		Vector2				_size;
		std::list<Vector2>	_points;

	public:
		Graph();
		Graph(float x, float y);
		Graph(const Graph &copy);
		~Graph();

		Graph & operator = (const Graph &assign);

		void	addPoint(float x, float y);
		void	drawGraph();
};
