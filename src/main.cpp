#include<iostream>
#include<string>
#include"../include/Account.hpp"
#include"../include/Proprietor.hpp"
#include"../include/Savings.hpp"

int main() {

	std::string id;
	std::string cpf;
	std::string name;
	std::string phone;

	std::cout << "Bem-vindo ao banco. Digite seu CPF?" << std::endl;
	std::cin >> cpf;
	std::cout << "Seu primeiro nome:" << std::endl;
	std::cin >> name;

	Proprietor propri(cpf,name);
	Account GT(propri);
	Savings GT2(Proprietor(CPF(cpf), name));
	//Account GT3(Proprietor(CPF(cpf), name));
	
	/*Worker worker (CPF("12312312312"), "Gabriel", 1000);
	std::cout << worker.getName();*/
	GT.getAccounts();

	std::cout << "CPF do proprietário: " << propri.getCpf() << std::endl;
	std::cout << "Nome do proprietário: " << propri.getName() << std::endl;

	GT.getBalance();
	GT.cashIn(500);
	GT.cashOut(200);

	GT2.getBalance();
	GT2.cashIn(500);
	GT2.cashOut(200);

}