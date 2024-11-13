#include "Worker.hpp"

int	main() {
	try {
		Worker worker = Worker();
		Shovel shovel = Shovel();

		worker.addTool(&shovel);
		(*worker.getTools().begin())->use();
		worker.removeTool(&shovel);
		(*worker.getTools().begin())->use();


	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
