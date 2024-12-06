#include<iostream>
#include "../include/Account.hpp"


int Account::numAccounts = 0;
Account::Account(Proprietor proprietor):  proprietor(proprietor), balance(0) {
	numAccounts++;
}

Account::~Account() {
	numAccounts--;
}

void Account::getBalance() {
	std::cout << "Seu saldo é de: " << balance << std::endl;
}

void Account::cashIn(float deposit) {
	if (deposit > 0) {
		balance += deposit;
		std::cout << "Valor de " << deposit << " depositado com sucesso!" << std::endl;
		std::cout << "Seu saldo agora é de " << balance << std::endl;
	}
	else std::cout << "Valor inválido para depósito";

}

void Account::cashOut(float withdraw) {
	if (balance > 0) {
		//Definia a taxa de acordo com a opção. Agora temos uma classe para a outra taxação.
		/*short int typeAccount = 0;
		std::cout << "Gostarias de sacar da CC(1) ou Poupança(2)?" << std::endl;
		std::cin >> typeAccount;
		float typeTax = 0;
		float typeTax = typeAccount == 1 ? 0.05 : 0.03;

		if (typeAccount == 1) typeTax = 0.05;
		else if (typeAccount == 2) typeTax = 0.03;
		else std::cout << "Opção inválida!"; exit(1);*/

		float tax = withdraw * 0.05;

		if ((balance - tax - withdraw) > 0) {
			balance -= (withdraw + tax);
			std::cout << "Valor de " << withdraw << " sacado com sucesso! (Tarifa de saque: " << tax << ")." << std::endl;
			std::cout << "Seu saldo agora é de " << balance << std::endl;
		}
		else std::cout << "Saldo insuficiente para saque com tarifa!" << std::endl;
		
	}
	else std::cout << "Saldo insuficiente para saque!" << std::endl;
}

void Account::getAccounts() {
	std:: cout << "Quantidade de contas criadas: " << numAccounts <<std::endl;
}



