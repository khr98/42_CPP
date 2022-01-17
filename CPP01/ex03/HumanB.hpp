#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *wp;
    std::string name;

public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &wp);
};

#endif
