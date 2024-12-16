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
	virtual ~Account();
	void getID();
	float getBalance() const;
	void cashIn(float deposit);
	void operator += (float deposit);
	void cashOut(float withdraw);
	void getAccounts();
	virtual float valTax() const = 0;
	friend std::ostream& operator << (std::ostream& cout, const Account& account);

};