#pragma once

#include "Command.hpp"

class PackageReductionDiscountCommand : public Command {
	private:

	public:
		PackageReductionDiscountCommand(const int id, const std::string& date, const std::string& client)
			: Command(id, date, client) {

		};

		PackageReductionDiscountCommand(const PackageReductionDiscountCommand& copy) : Command(copy) {
			*this = copy;
		};
		
		~PackageReductionDiscountCommand() {

		};

		PackageReductionDiscountCommand& operator=(const PackageReductionDiscountCommand& assign) {
			(void)assign;

			return (*this);
		};

		int	applyPackageReductionDiscount() {
			int	ammount = get_total_price();

			if (ammount <= 150) {
				std::cout << "Could not apply package reduction discount because total spent is less than 150€!" << std::endl;
				return (ammount);
			}

			return (ammount - 10);
		};

};
