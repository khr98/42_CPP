#include "Zombie.hpp"

int main()
{
    Zombie *zom;

    std::cout << "---------------------------" << std::endl;
    zom = newZombie("hyerkim");
    zom->announce();
    delete zom;
    std::cout << "---------------------------" << std::endl;
    randomChump("kimhyerim");
    return (0);
}