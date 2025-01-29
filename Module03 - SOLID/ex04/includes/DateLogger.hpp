#pragma once

#include "ILogger.hpp"
#include <ctime>

class DateLogger : public ILogger {
	private:
		ILogger*	_logger;

	public:
		DateLogger(ILogger* logger) : _logger(logger) {}

		~DateLogger() {}

		virtual void	write(std::string text) {
			time_t timestamp;
			char time[50];
			struct tm * datetime;

			std::time(&timestamp);
			datetime = std::localtime(&timestamp);

			std::strftime(time, 50, "%H:%M:%S ", datetime);
			_logger->write(time + text);
		}
};
