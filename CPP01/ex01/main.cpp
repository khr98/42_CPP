#include "Zombie.hpp"

int main()
{
    Zombie *zb;

    zb = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
        zb[i].announce();
    delete[] zb;
    return (0);
}
