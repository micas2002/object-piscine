#pragma once

#include "ILogger.hpp"

class OsLogger : public ILogger {
	private:
		std::ostream&	_ostream;
	public:
		OsLogger(std::ostream& ostream) : _ostream(ostream) {}

		~OsLogger() {}

		virtual	void	write(std::string text) {_ostream << text << std::endl;}
};
