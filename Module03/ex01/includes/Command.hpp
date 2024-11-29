#pragma once

#include <iostream>
#include <map>

class Command {
	private:
		int									_id;
		std::string							_date;
		std::string							_client;
		std::map<std::string, unsigned int>	_articles;

	public:
		Command();
		Command(const Command& copy);
		~Command();

		Command& operator=(const Command& assign);
};	
