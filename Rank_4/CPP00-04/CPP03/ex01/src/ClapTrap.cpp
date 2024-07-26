#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hp(10), _energy(10), _attack(0) {
	std::cout << GREEN << "Default Constructor Called" << RESET << "\n";
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _energy(10), _attack(0) {
	_name = name;
	std::cout << ORANGE << name << GREEN << " Constructor Called" << RESET << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
	std::cout << GREEN << "Copy Constructor Called" << RESET << "\n";
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "Destructor Called" << RESET << "\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy_a) {
	_name = copy_a._name;
	_hp = copy_a._hp;
	_energy = copy_a._energy;
	_attack = copy_a._attack;
	std::cout << GREEN << "Copy Assignment Operator Called" << RESET << std::endl;
	return (*this);
}

void	ClapTrap::getStats() {
	std::cout << ORANGE << _name << " Stats\n" << RESET << "HP: " << _hp << "\nEnergy: " << _energy << "\nAttack: " << _attack << "\n";
}

std::string	ClapTrap::getName() {
	return (_name);
}

int	ClapTrap::getHp() {
	return (_hp);
}

int	ClapTrap::getEnergy() {
	return (_energy);
}

int	ClapTrap::getAttack() {
	return (_attack);
}

int		ClapTrap::check(void) {
	if (_energy <= 0) {
		std::cout << _name << " is out of energy points!\n";
		return (1);
	}
	if (_hp <= 0) {
		std::cout << _name << " has no hp left!\n";
		return (1);
	}
	return (0);
}

void ClapTrap::attack(const std::string &target) {
	if (check()) return ;
	_energy -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount > 0) {
		_hp -= amount;
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage.\n";
	}
	if (_hp <= 0) {
		_hp = 0;
		_attack = 0;
		std::cout << "ClapTrap " << _name << " died!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (check()) return ;
	if (amount + _hp > 10) _hp = 10;
	else _hp += amount;
	_energy--;
	std::cout << "ClapTrap " << _name << " repaired " << amount << " health points\n";
}
