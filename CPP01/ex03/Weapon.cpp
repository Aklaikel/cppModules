#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string type) {
    this->setType(type);
}

Weapon::~Weapon() {

}

std::string const& Weapon::getType(void) {
    return _type;
}

void	Weapon::setType(std::string type) {
    _type = type;
}