#include "Command.hpp"
#include "ThuesdayDiscountCommand.hpp"
#include "PackageReductionDiscountCommand.hpp"

int	main() {
	{
		Command order1 = Command(1, "Monday", "John");

		order1.addBread(5);
		order1.addMilk(1);

		std::cout << "order1 ammount is: " << order1.get_total_price() << "€" << std::endl;
	}

		std::cout << std::endl;

	{
		ThuesdayDiscountCommand order2 = ThuesdayDiscountCommand(2, "Thuesday", "Carl");

		order2.addBread(5);
		order2.addMilk(1);

		std::cout << "order2 ammount is: " << order2.applyThuesdayDiscount() << "€" << std::endl;
	}

	std::cout << std::endl;

	{
		ThuesdayDiscountCommand order3 = ThuesdayDiscountCommand(2, "Monday", "Earl");

		order3.addBread(5);
		order3.addMilk(1);

		std::cout << order3.applyThuesdayDiscount() << "€" << std::endl;
	}

	std::cout << std::endl;

	{
		PackageReductionDiscountCommand order4 = PackageReductionDiscountCommand(2, "Friday", "Anna");

		order4.addBread(6);
		order4.addMilk(1);

		std::cout << "order4 ammount is:" << order4.applyPackageReductionDiscount() << "€" << std::endl;
	}

	std::cout << std::endl;

	{
		PackageReductionDiscountCommand order5 = PackageReductionDiscountCommand(2, "Friday", "Ben");

		order5.addBread(2);
		order5.addMilk(2);

		std::cout << order5.applyPackageReductionDiscount() << "€" << std::endl;
	}

	return (0);
}
