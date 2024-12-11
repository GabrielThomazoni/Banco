#include "../include/Manager.hpp"

Manager::Manager(CPF cpf, std::string name, float salary) : Worker(cpf, name, salary) {

}

float Manager::bonus() const{
	return getSalary() * 0.1;
}