#include "../include/Manager.hpp"

Manager::Manager(CPF cpf, std::string name, float salary, std::string passwd, WeekPay payDay) : Worker(cpf, name, salary, payDay), Authen(passwd) {

}

float Manager::bonus() const{
	return getSalary() * 0.1;
}