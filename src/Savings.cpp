#include<iostream>
#include "../include/Savings.hpp"

Savings::Savings(Proprietor proprietor) : Account(proprietor) {

}

void Savings::cashOut(float withdraw) {
	if (balance > 0) {
		float tax = withdraw * 0.03;

		if ((balance - tax - withdraw) > 0) {
			balance -= (withdraw + tax);
			std::cout << "Valor de " << withdraw << " sacado com sucesso! (Tarifa de saque: " << tax << ")." << std::endl;
			std::cout << "Seu saldo agora é de " << balance << std::endl;
		}
		else std::cout << "Saldo insuficiente para saque com tarifa!" << std::endl;

	}
	else std::cout << "Saldo insuficiente para saque!" << std::endl;
}