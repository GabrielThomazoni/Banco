#include<iostream>
#include"../include/CPF.hpp"

CPF::CPF(std::string cpf) : cpf(cpf) {
	if (cpf.size() != 11 && cpf.size() != 14) {
		std::cout << "CPF INVÁLIDO!" << std::endl;
		exit(1);
	}
}

std::string CPF::getCpf() const{
	return cpf;
}