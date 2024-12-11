#include "../include/Authen.hpp"

Authen::Authen(std::string passwd) : passwd(passwd) {

}

bool Authen::verifyAuth(std::string passwd) const{
	return passwd == this->passwd;
}