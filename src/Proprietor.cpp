#include<iostream>
#include "../include/Proprietor.hpp"

Proprietor::Proprietor(CPF cpf, std::string name, std::string passwd) : People(cpf,name), Authen(passwd){

}


