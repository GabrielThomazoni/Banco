#pragma once
#include "Account.hpp"

class Savings final: public Account
{
private:

public:
	Savings(Proprietor proprietor);
	float valTax() const override;
};

