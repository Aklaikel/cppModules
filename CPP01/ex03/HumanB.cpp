#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name), _weapontype(NULL) {
}

HumanB::~HumanB() {
}

void    HumanB::attack(void) {
    std::cout << this->_name << " attacks with their " + this->_weapontype->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wtype) {
	this->_weapontype = &wtype;
}