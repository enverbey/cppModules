#include "../include/HumanA.hpp"

HumanA::HumanA(std::string argName, Weapon &argWeapon)
{
	this->_name = argName;
	this->Weapon = argWeapon;
}

HumanA::~HumanA()
{}
