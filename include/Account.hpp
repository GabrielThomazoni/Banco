#pragma once
#include<string>
#include "Proprietor.hpp"
#include "Worker.hpp"

class Account
{
private:
	static int numAccounts;
	Proprietor proprietor;
	std::string id;

protected:
	float balance;

public:
	Account(Proprietor proprietor);
	~Account();
	void getID();

	void getBalance();
	void cashIn(float deposit);
	void cashOut(float withdraw);
	void getAccounts();

};