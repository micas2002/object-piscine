#pragma once

#include <iostream>
#include <map>

class Command {
	protected:
		int									_id;
		std::string							_date;
		std::string							_client;
		std::map<std::string, unsigned int>	_articles;

	public:
		Command(const int id, const std::string& date, const std::string& client)
			: _id(id), _date(date), _client(client) {

		};

		Command(const Command& copy) {
			*this = copy;
		};
		
		~Command() {

		};

		Command& operator=(const Command& assign) {
			(void)assign;

			return (*this);
		};

		void	addBread(unsigned int ammount) {
			_articles.insert(std::pair<std::string, unsigned int>("bread", ammount));
		}

		void	addMilk(unsigned int ammount) {
			_articles.insert(std::pair<std::string, unsigned int>("milk", ammount));
		}

		int	get_total_price() {
			std::map<std::string, unsigned int>::iterator it = _articles.begin();
			int	ammount = 0;

			for (; it != _articles.end(); ++it) {
				if (it->first == "milk")
					ammount += 5 * it->second;
				else
					ammount += 25 * it->second;
			}

			return (ammount);
		};

};	
