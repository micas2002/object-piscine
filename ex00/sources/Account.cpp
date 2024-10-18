#include "Bank.hpp"

Bank::Account::Account() : _id(-1), _value(0) {

}

Bank::Account::Account(const int &id, const int &value) : _id(id), _value(value) {

}

Bank::Account::Account(const Account &copy) {
	*this = copy;
}

Bank::Account::~Account() {

}

Bank::Account & Bank::Account::operator=(const Bank::Account &assign) {
	if (this != &assign) {
		_id = assign._id;
		_value = assign._value;
	}
	return(*this);
}

int	Bank::Account::getId() const {
	return (_id);
}

int	Bank::Account::getValue() const {
	return (_value);
}
