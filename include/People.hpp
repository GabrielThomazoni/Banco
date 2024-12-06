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
	

private:
	void verifyName();
	
public:
	
};

