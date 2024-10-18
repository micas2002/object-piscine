#pragma once

#include <iostream>
#include <map>

class Bank {
	private:
		class Account {
			private:
				int	_id;
				int	_value;

			public:
				Account();
				Account(const int &id, const int &value);
				Account(const Account &copy);
				~Account();

				Account & operator = (const Account &assign);

				// getters
				int	getId() const;
				int	getValue() const;

				friend class Bank;
		};

		int						_liquidity;
		int						_lastAccountId;
		std::map<int, Account*>	_clientAccounts;

	public:
		Bank();
		Bank(const Bank & copy);
		~Bank();

		Bank & operator = (const Bank &assign);
		Account* operator [] (const int id);
		friend std::ostream& operator << (std::ostream& p_os, Bank& p_bank);
		friend std::ostream& operator << (std::ostream& p_os, Bank::Account& p_account);

		void	createAccount();
		void	deleteAccount(const int id);

		void	makeDeposit(const int id, const unsigned int ammount);
		void	giveLoan(const int id, const unsigned int ammount);
};
