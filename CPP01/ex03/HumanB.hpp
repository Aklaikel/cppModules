#pragma once
#include "Weapon.hpp"
#include<iostream>
#include<string>

class HumanB
{
private:
    std::string _name;
    Weapon  *_weapontype;
public:
    HumanB(std::string name);
    ~HumanB();
    void	attack();
    void    setWeapon(Weapon &wtype);
};
