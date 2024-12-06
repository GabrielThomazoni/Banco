#include<iostream>
#include "../include/People.hpp"

People::People(CPF cpf, std::string name) : cpf(cpf), name(name){
	verifyName();
}

void People::verifyName() {
	if (name.size() < 5) {
		std::cout << "Nome muito curto!";
		exit(1);
	}
}


