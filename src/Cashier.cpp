#include "../include/Cashier.hpp"

Cashier::Cashier(CPF cpf, std::string name, float salary, WeekPay payDay) : Worker(cpf, name, salary, payDay) {

}

float Cashier::bonus() const{
	return getSalary() * 0.05;
}