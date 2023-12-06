#include "../include/Weapon.hpp"

Weapon::Weapon(std::string arg)
{
	this->_type = arg;
}

Weapon::~Weapon()
{}

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string arg)
{
	this->_type = arg;
}