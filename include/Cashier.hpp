#pragma once
#include"Worker.hpp"

class Cashier final : public Worker
{
private:

public:
	Cashier(CPF cpf, std::string name, float salary, WeekPay payDay);
	float bonus() const override;
};

