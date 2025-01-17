#include<iostream>
#include<string>
#include"../include/Account.hpp"
#include"../include/Proprietor.hpp"
#include"../include/Savings.hpp"
#include "../include/Current.hpp"
#include "../include/Manager.hpp"



void Auth(Authen& someone, std::string passwd) {
	if (someone.verifyAuth(passwd)) std::cout << "Senha correta, login concluído" << std::endl;
	else std::cout << "Senha Incorreta" << std::endl;
}

std::ostream& operator << (std::ostream& cout, const Account& account) {
	People propri = account.proprietor;
	cout << "Saldo: " << account.getBalance() << std::endl;
	cout << "Proprietário: " << propri.getName() << std::endl; 
	return cout;
}

void TestSaque(Account& account) {
	//std::pair<Account::resCashOut, float> res = account.cashOut(200); embaixo uso "auto" para diminuir o tamanho da definição
	auto res = account.cashOut(10);
	if (auto balance = std::get_if<float>(&res)) {
		std::cout << "Novo Saldo: " << *balance << std::endl;
	}
}

int main() {

	std::string id;
	std::string cpf;
	std::string name;
	std::string phone;

	std::cout << "Bem-vindo ao banco. Digite seu CPF?" << std::endl;
	std::cin >> cpf;
	std::cout << "Seu primeiro nome:" << std::endl;
	std::cin >> name;

	Proprietor propri(cpf, name, "123");
	Current GT(propri);
	Savings GT2(Proprietor(CPF(cpf), name, "123"));
	Current GT3(Proprietor(CPF(cpf), name, "321"));


	GT.getAccounts();

	std::cout << "CPF do proprietário: " << propri.getCpf() << std::endl;
	std::cout << "Nome do proprietário: " << propri.getName() << std::endl;

	std::cout << "Seu saldo é de: " << GT.getBalance() << std::endl;
	//GT.cashIn(500);
	//Sobrecarreguei o operado e agora consigo chamar a função depositar só colocando o operado "+="
	(Account&) GT += 500;
	GT.cashOut(200);

	std::cout << "Seu saldo é de: " << GT2.getBalance() << std::endl;
	GT2.cashIn(500);
	GT2.cashOut(200);

	GT.transferTo(GT2, 100);

	GT3 += GT;

	std::cout << GT3;

	GT3.transferTo(GT2, 100);
	std::cout << GT3;

	WeekPay payDay = WeekPay::Segunda;
	Manager managerA(CPF("123.456.789-10"), "José", 1000, "555", payDay);
	std::cout << (unsigned short int) payDay << std::endl;

	TestSaque(GT3);

}