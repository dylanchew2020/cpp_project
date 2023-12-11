/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:29:15 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 19:55:06 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->setHitpoints(FragTrap::getHitpoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
	
	cout << "\nDiamondTrap name constructor called" << endl;
	cout << "DiamondTrap private name init:  " << this->_name << endl;
	cout << "ScavTrap name init:  " << ScavTrap::getName() << endl;
	cout << "DiamondTrap name init:  " << FragTrap::getName() << endl;
	cout << "ClapTrap name init:  " << ClapTrap::getName() << endl;
	cout << "Hitpoints init:  " << this->getHitpoints() << endl;
	cout << "EnergyPoints init:  " << this->getEnergyPoints() << endl;
	cout << "AttackDamage init:  " << this->getAttackDamage() << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap)
{
	*this = DiamondTrap;
	cout << "\nDiamondTrap copy constructor called" << endl;
	cout << "This object name is now: " << this->_name << endl;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "\nDiamondTrap destructor called" << endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& DiamondTrap)
{
	if (this != &DiamondTrap)
	{
		this->_name = DiamondTrap._name;
		this->setHitpoints(FragTrap::getHitpoints());
		this->setEnergyPoints(ScavTrap::getEnergyPoints());
		this->setAttackDamage(FragTrap::getAttackDamage());
		ClapTrap::setName(DiamondTrap._name + "_clap_name");
	}
	cout << "\nDiamondTrap assignment operator called" << endl;
	cout << "This object name is now: " << this->_name << endl;
	return (*this);
}

void	DiamondTrap::attack(string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	cout << "\nDiamondTrap whoAmI function called" << endl;
	cout << "DiamondTrap name:  " << this->_name << endl;
	cout << "ClapTrap name:  " << ClapTrap::getName() << endl;
}