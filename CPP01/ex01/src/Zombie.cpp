#include "../include/Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string arg)
{
	this->_name = arg;
	std::cout << "Zombie " << _name << " is created" << std::endl;
}