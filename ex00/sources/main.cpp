#include "Bank.hpp"

int main()
{
	try {
		Bank bank = Bank();

		bank.createAccount();
		bank.makeDeposit(0, 50);
		bank.giveLoan(0, 100);

		std::cout << bank << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	try {
		Bank bank = Bank();

		bank.createAccount();
		bank.makeDeposit(0, 150);
		bank.giveLoan(0, 100);

		std::cout << bank << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	try {
		Bank bank = Bank();

		bank.createAccount();
		bank.makeDeposit(0, 50);
		bank.giveLoan(0, 150);

		std::cout << bank << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	try {
		Bank bank = Bank();

		bank.createAccount();
		bank.createAccount();
		bank.makeDeposit(0, 100);
		bank.makeDeposit(1, 50);
		bank.giveLoan(0, 50);
		bank.giveLoan(1, 10);
		bank.deleteAccount(0);

		std::cout << bank << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	try {
		Bank bank = Bank();

		bank.createAccount();
		bank.createAccount();
		bank.deleteAccount(1);
		bank.createAccount();

		std::cout << bank << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	try {
		Bank bank = Bank();

		bank.createAccount();
		bank.makeDeposit(0, 150);

		std::cout << bank[0] << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// std::cout << "---------------------" << std::endl;

	// try {
	// 	Bank bank = Bank();

	// 	bank.createAccount();
	// 	bank._liquidity = 500;

	// 	std::cout << bank << std::endl;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "---------------------" << std::endl;

	// try {
	// 	Account account = Account();

	// 	std::cout << account << std::endl;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	return (0);
}
