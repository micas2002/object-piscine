#pragma once

#include "ILogger.hpp"

class HeaderLogger : public ILogger {
	private:
		ILogger				*_logger;

	public:
		HeaderLogger(ILogger* logger) : _logger(logger) {}

		~HeaderLogger() {}

		virtual void	write(std::string text) {
			const	std::string	_header = "This is the header: ";
			_logger->write(_header + text);
		}
};