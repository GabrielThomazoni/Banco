#include<iostream>
#include "../include/Worker.hpp"

Worker::Worker(CPF cpf, std::string name, float salary) : People(cpf, name), salary(salary) {


}

std::string Worker::getName() {
	return name;
}

std::string Worker::getCpf() {
	return cpf.getCpf();
}
