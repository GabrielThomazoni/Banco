#pragma once
#include"Worker.hpp"

class Manager final : public Worker
{
private:
	
public:
	Manager(CPF cpf, std::string name, float salary);
	float bonus() const override;
};

