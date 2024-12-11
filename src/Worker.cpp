#include<iostream>
#include "../include/Worker.hpp"

Worker::Worker(CPF cpf, std::string name, float salary) : People(cpf, name), salary(salary) {


}

std::string Worker::getName() const{
	return name;
}

std::string Worker::getCpf() const{
	return cpf.getCpf();
}

float Worker::getSalary() const {
	return salary;
}