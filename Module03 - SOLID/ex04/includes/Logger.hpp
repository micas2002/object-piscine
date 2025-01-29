#pragma once

#include "ILogger.hpp"
#include <fstream>

class Logger : public ILogger {
	private:
		const std::string	_fileName;

	public:
		Logger(const std::string& fileName) : _fileName(fileName) {}

		~Logger() {}

		virtual void	write(std::string text) {
			std::ofstream f(_fileName.c_str(), std::ios::app);
    		f << text << '\n';
    		f.close();
		}
};
