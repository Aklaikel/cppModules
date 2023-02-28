#include"Zombie.hpp"
#define N 100

int main() {
    randomChump("Bar");
    Zombie  *zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;
}