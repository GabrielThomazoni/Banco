#pragma once
#include<string>
#include"People.hpp"
#include"Authen.hpp"


class Proprietor : public People, Authen
{
private:
	
public:
	Proprietor(CPF cpf, std::string name, std::string passwd);
	std::string getCpf();
	std::string getName();
};

