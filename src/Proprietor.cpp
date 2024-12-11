#include<iostream>
#include "../include/Proprietor.hpp"

Proprietor::Proprietor(CPF cpf, std::string name, std::string passwd) : People(cpf,name), Authen(passwd){

}

std::string Proprietor::getCpf() {
	return cpf.getCpf();
}

std::string Proprietor::getName() {
	return name;
}

