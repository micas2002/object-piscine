#include "ILogger.hpp"
#include "Logger.hpp"
#include "OsLogger.hpp"
#include "HeaderLogger.hpp"
#include "DateLogger.hpp"
#include <vector>
#include <list>

int	main(void) {
	Logger fileLogger = Logger("/home/mibernar/projects/object-piscine/Module03/ex04/file.txt");
	OsLogger osLogger = OsLogger(std::cout);
	HeaderLogger stringLogger = HeaderLogger(&fileLogger);
	DateLogger dateLogger = DateLogger(&osLogger);

	std::vector<ILogger*>	loggers;
	loggers.push_back(&fileLogger);
	loggers.push_back(&osLogger);
	loggers.push_back(&stringLogger);
	loggers.push_back(&dateLogger);

	std::list<std::string>	list;
	list.push_back("hello");
	list.push_back("world");
	list.push_back("testing");
	list.push_back("loggers!");

	std::list<std::string>::iterator it = list.begin();
	for (; it != list.end(); ++it) {
		std::vector<ILogger*>::iterator loggersIt = loggers.begin();
		for (; loggersIt != loggers.end(); ++loggersIt)
			(*loggersIt)->write(*it);
	}

	return (0);
}
