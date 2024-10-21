#pragma once

class Graph {
	private:

	public:
		Graph();
		Graph(const Graph &copy);
		~Graph();

		Graph & operator = (const Graph &assign);
};