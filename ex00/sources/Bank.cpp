#include "Bank.hpp"

Bank::Bank() : _liquidity(100), _lastAccountId(0) {

}

Bank::Bank(const Bank &copy) {
	*this = copy;
}

Bank::~Bank() {
	std::map<int, Bank::Account*>::iterator it = _clientAccounts.begin();

	for (; it != _clientAccounts.end(); ++it) {
		delete it->second;
		// _clientAccounts.erase(it);
	}
}

Bank& Bank::operator=(const Bank &assign) {
	if (this != &assign) {
		_liquidity = assign._liquidity;
		_clientAccounts = assign._clientAccounts;
	}
	return(*this);
}

Bank::Account*	Bank::operator[](const int id) {
	return (_clientAccounts.at(id));
}

void	Bank::createAccount() {
	Bank::Account *new_account = new Bank::Account(_lastAccountId, 0);
	
	_clientAccounts.insert(std::pair<int, Bank::Account*>(_lastAccountId++, new_account));
}

void	Bank::deleteAccount(const int id) {
	if (_clientAccounts.find(id) != _clientAccounts.end()) {
		delete _clientAccounts[id];
		_clientAccounts.erase(id);

	}
	else
		throw std::out_of_range("No Account with such id");
}

void	Bank::makeDeposit(const int id, const unsigned int ammount) {
	if (_clientAccounts.find(id) != _clientAccounts.end()) {
		_clientAccounts[id]->_value += (ammount * .95);

		_liquidity += (ammount * .05);
	}
	else
		throw std::out_of_range("No Account with such id");
}

void	Bank::giveLoan(const int id, const unsigned int ammount) {
	if ( _liquidity < ammount)
		throw std::out_of_range("Bank does not have enough money for the loan!");
	if (_clientAccounts.find(id) != _clientAccounts.end()) {
		_clientAccounts[id]->_value += ammount;

		_liquidity -= ammount;
	}
	else
		throw std::out_of_range("No Account with such id");
	
}

std::ostream& operator << (std::ostream& p_os, Bank& p_bank) {
	std::map<int, Bank::Account*>::iterator it = p_bank._clientAccounts.begin();
	
	p_os << "Bank informations : " << std::endl;
	p_os << "Liquidity : " << p_bank._liquidity << std::endl;

	p_os << "\nAccounts:" << std::endl;
	
	for (; it != p_bank._clientAccounts.end(); ++it)
		p_os << *it->second << std::endl;
	return (p_os);
}

std::ostream& operator << (std::ostream& p_os, Bank::Account& p_account) {
	p_os << "[" << p_account.getId() << "] - [" << p_account.getValue() << "]";
	return (p_os);
}
