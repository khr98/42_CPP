#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string _name);
    void announce(void);
    void setName(std::string name);
    ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif
