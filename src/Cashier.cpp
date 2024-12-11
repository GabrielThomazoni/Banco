#include "../include/Cashier.hpp"

Cashier::Cashier(CPF cpf, std::string name, float salary) : Worker(cpf, name, salary) {

}

float Cashier::bonus() const{
	return getSalary() * 0.05;
}