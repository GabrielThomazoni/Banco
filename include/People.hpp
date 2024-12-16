#pragma once
#include<string>
#include "CPF.hpp"

class People
{
protected:
	CPF cpf;
	std::string name;

public:
	People(CPF cpf, std::string name);
	std::string getName();
	std::string getCpf();
private:
	void verifyName();
	
public:
	
};

