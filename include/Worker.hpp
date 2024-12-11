#pragma once
#include<string>
#include"People.hpp"


class Worker : public People
{
private:
	float salary;

public:
	Worker(CPF cpf, std::string name, float salary);
	std::string getName() const;
	std::string getCpf() const;
	float getSalary() const;
	virtual float bonus() const = 0;
};

