#include <iostream>
#include "../include/Current.hpp"

Current::Current(Proprietor proprietor) : Account(proprietor) {
	std::cout << "Conta Corrente criada." << std::endl;
}

float Current::valTax() const {
	return 0.05;
}
