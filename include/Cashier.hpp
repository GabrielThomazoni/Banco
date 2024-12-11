#pragma once
#include"Worker.hpp"

class Cashier final : public Worker
{
private:

public:
	Cashier(CPF cpf, std::string name, float salary);
	float bonus() const override;
};

