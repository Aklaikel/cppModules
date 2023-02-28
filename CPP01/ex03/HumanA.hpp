#pragma once
#include"Weapon.hpp"
#include<iostream>
#include<string>

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapontype;
public:
	HumanA(std::string name, Weapon &wtype);
	~HumanA();
	void	attack();
};

