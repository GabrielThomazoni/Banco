#pragma once
#include "Account.hpp"

class Current final : public Account
{
private:

public:
	Current(Proprietor proprietor);
	float valTax() const override;
};
