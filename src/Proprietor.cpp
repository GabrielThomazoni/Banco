#include<iostream>
#include "../include/Proprietor.hpp"

Proprietor::Proprietor(CPF cpf, std::string name) : People(cpf,name){

}

std::string Proprietor::getCpf() {
	return cpf.getCpf();
}

std::string Proprietor::getName() {
	return name;
}

