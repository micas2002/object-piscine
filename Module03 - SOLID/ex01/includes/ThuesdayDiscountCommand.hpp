#pragma once

#include "Command.hpp"

class ThuesdayDiscountCommand : public Command {
	private:

	public:
		ThuesdayDiscountCommand(const int id, const std::string& date, const std::string& client) 
		: Command(id, date, client) {

		};

		ThuesdayDiscountCommand(const ThuesdayDiscountCommand& copy) : Command(copy) {
			*this = copy;
		};
		
		~ThuesdayDiscountCommand() {

		};

		ThuesdayDiscountCommand& operator=(const ThuesdayDiscountCommand& assign) {
			(void)assign;

			return (*this);
		};

		int	applyThuesdayDiscount() {
			int	ammount = get_total_price();

			if (_date != "Thuesday") {
				std::cout << "Could not apply thuesday discount because today is not thuesday!" << std::endl;
				return (ammount);
			}

			return (ammount * .9);
		};

};
