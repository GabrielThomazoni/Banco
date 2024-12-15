#pragma once
#include"Worker.hpp"
#include"Authen.hpp"

class Manager final : public Worker, Authen
{
private:
	
public:
	Manager(CPF cpf, std::string name, float salary, std::string passwd, WeekPay payDay);
	float bonus() const override;
};

