#include "../include/Zombie.hpp"
#include "../include/Zombie.h"

int main()
{
	Zombie x("Foo");
	Zombie y("Boo");
	Zombie *z;
	x.announce();
	y.announce();
	z = newZombie("Zoo");
	z->announce();
	delete (z);
	randomChump("Random Zomb");
}