#pragma once
#include<string>
#include"People.hpp"
#include "WeekPay.hpp"


class Worker : public People
{
private:
	float salary;
	WeekPay payDay;
public:
	Worker(CPF cpf, std::string name, float salary, WeekPay payDay);
	std::string getName() const;
	std::string getCpf() const;
	float getSalary() const;
	virtual float bonus() const = 0;
};

