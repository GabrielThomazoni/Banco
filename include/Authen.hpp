#pragma once
#include<string>

class Authen
{
private:
	std::string passwd;
public:
	Authen(std::string passwd);
	bool verifyAuth(std::string passwd) const;
};

