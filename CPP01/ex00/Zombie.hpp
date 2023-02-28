#pragma once
#include<iostream>
#include<string>
class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
    void            setName(std::string);
    std::string     getName(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );