#pragma once
#include "Account.hpp"

class Savings : public Account
{
private:

public:
	Savings(Proprietor proprietor);
	void cashOut(float withdraw);
};

