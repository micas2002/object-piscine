#include "Worker.hpp"

int	main() {
	// try {
	// 	Worker worker = Worker();
	// 	Shovel shovel = Shovel();

	// 	worker.addTool(&shovel);
	// 	std::cout << (*worker.getTools().begin())->getNumberOfUses() << std::endl;
	// 	(*worker.getTools().begin())->use();
	// 	std::cout << (*worker.getTools().begin())->getNumberOfUses() << std::endl;
	// 	worker.removeTool(&shovel);
	// 	(*worker.getTools().begin())->use();
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl << std::endl;

	// try {
	// 	Worker worker = Worker();
	// 	Hammer hammer = Hammer();

	// 	worker.addTool(&hammer);
	// 	std::cout << (*worker.getTools().begin())->getNumberOfUses() << std::endl;
	// 	(*worker.getTools().begin())->use();
	// 	std::cout << (*worker.getTools().begin())->getNumberOfUses() << std::endl;
	// 	worker.removeTool(&hammer);
	// 	(*worker.getTools().begin())->use();
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl << std::endl;

	// try {
	// 	Worker worker1 = Worker();
	// 	Worker worker2 = Worker();
	// 	Hammer hammer = Hammer();

	// 	worker1.addTool(&hammer);
	// 	std::cout << "worker1" << std::endl;
	// 	(*worker1.getTools().begin())->use();
	// 	worker2.addTool(&hammer);
	// 	std::cout << "worker2" << std::endl;
	// 	(*worker2.getTools().begin())->use();
	// 	std::cout << "worker1 now with no tool" << std::endl;
	// 	(*worker1.getTools().begin())->use();

	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl << std::endl;

	// try {
	// 	Shovel shovel = Shovel();
	// 	Worker worker2 = Worker();
	// 	{
	// 		Worker worker1 = Worker();
	// 		worker1.addTool(&shovel);
	// 		std::cout << "worker1\n";
	// 		(*worker1.getTools().begin())->use();
	// 	}
	// 	std::cout << shovel.getNumberOfUses() << std::endl;
	// 	worker2.addTool(&shovel);
	// 	std::cout << "worker2\n";
	// 	(*worker2.getTools().begin())->use();

	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl << std::endl;

	// try {
	// 	Worker worker1 = Worker();
	// 	Worker worker2 = Worker();
	// 	Shovel shovel = Shovel();
	// 	Hammer hammer = Hammer();
	// 	Workshop workshop = Workshop();

	// 	worker1.addTool(&shovel);
	// 	worker2.addTool(&hammer);

	// 	workshop.signUp(&worker1);
	// 	workshop.signUp(&worker2);
	// 	workshop.executeWorkDay();
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl << std::endl;

	try {
		Worker worker = Worker();
		Hammer hammer = Hammer();
		Workshop workshop1 = Workshop();
		Workshop workshop2 = Workshop();

		worker.addTool(&hammer);

		workshop1.signUp(&worker);
		workshop2.signUp(&worker);
		std::cout << "Workshop 1" << std::endl;
		workshop1.executeWorkDay();
		std::cout << "Workshop 2" << std::endl;
		workshop1.executeWorkDay();

		workshop2.leaveWorkshop(&worker);
		workshop2.executeWorkDay();

	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
