#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &_wtype):_name(name), _weapontype(_wtype) {
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void) {
    std::cout << this->_name + " attacks with their "<< this->_weapontype.getType() <<std::endl;
}