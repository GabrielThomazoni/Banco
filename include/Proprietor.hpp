#pragma once
#include<string>
#include"People.hpp"


class Proprietor : public People
{
private:
	
public:
	Proprietor(CPF cpf, std::string name);
	std::string getCpf();
	std::string getName();
};

