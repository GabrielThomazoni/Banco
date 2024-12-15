#include<iostream>
#include "../include/Worker.hpp"

Worker::Worker(CPF cpf, std::string name, float salary, WeekPay payDay) : People(cpf, name), salary(salary), payDay(payDay) {


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