#include<iostream>
#include "../include/Savings.hpp"

Savings::Savings(Proprietor proprietor) : Account(proprietor) {
	std::cout << "Conta Poupança criada." << std::endl;
}

float Savings::valTax() const{
	return 0.03;
}