#include "../include/Zombie.hpp"
#include "../include/Zombie.h"

int main()
{
	int N;
    
    N = 5;
    Zombie *zomb = zombieHorde(N, "Foo");
    for (int i = 0; i < N; i++) {
        zomb[i].announce();
    }
    delete[] zomb;
}