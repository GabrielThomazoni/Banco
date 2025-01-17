#include <iostream>
#include "../include/Current.hpp"

Current::Current(Proprietor proprietor) : Account(proprietor) {
	std::cout << "Conta Corrente criada." << std::endl;
}

float Current::valTax() const {
	return 0.05;
}

void Current::transferTo(Account& account, float value) {
	auto res = cashOut(value);
	if(res.index() == 1) account.cashIn(value);
}

void Current::operator += (Current& transfAccount) {
	transfAccount.transferTo(*this, transfAccount.getBalance() / 2);
}
