#include"Zombie.hpp"
#define N 100

int main() {
    Zombie  *zombies = zombieHorde(N, "Foo");

    for (int i = 0; i < N; i++) {
        zombies[i].announce();
    }
    
    delete [] zombies;
}