#include "../include/Manager.hpp"

Manager::Manager(CPF cpf, std::string name, float salary, std::string passwd) : Worker(cpf, name, salary), Authen(passwd) {

}

float Manager::bonus() const{
	return getSalary() * 0.1;
}