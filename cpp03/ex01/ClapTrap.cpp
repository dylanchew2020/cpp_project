/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:48:13 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 20:04:51 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	cout << endl << "ClapTrap default constructor called" << endl;
}

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << endl << "ClapTrap name constructor called" << endl;
	cout << "This object name is: " << this->_name << endl;
}

ClapTrap::ClapTrap(const ClapTrap& ClapTrap)
{
	*this = ClapTrap;
	cout << endl << "ClapTrap copy constructor called" << endl;
	cout << "This object name is now: " << this->_name << endl;
}

ClapTrap::~ClapTrap(void)
{
	cout << endl << "ClapTrap destructor called" << endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrap)
{
	if (this != &ClapTrap)
	{
		this->_name = ClapTrap._name;
		this->_hitPoints = ClapTrap._hitPoints;
		this->_energyPoints = ClapTrap._energyPoints;
		this->_attackDamage = ClapTrap._attackDamage;
	}
	cout << endl << "ClapTrap assignment operator called" << endl;
	cout << "This object name is now: " << this->_name << endl;
	return (*this);
}

string ClapTrap::getName(void) const
{
	return (this->_name);
}

void ClapTrap::setName(string name)
{
	this->_name = name;
}

int ClapTrap::getHitpoints(void) const
{
	return (this->_hitPoints);
}

void ClapTrap::setHitpoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

void ClapTrap::attack(string const& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		cout << endl << "ClapTrap " << this->_name
			<< " attacks " << target
			<< ", causing " << this->_attackDamage
			<< " points of damage!" << endl;
		this->_energyPoints -= 1;
	}
	else if (this->_energyPoints <= 0)
		cout << endl << "Cannot Attack! ClapTrap " << this->_name
			<< " has no energy points left!" << endl;
	else if (this->_hitPoints <= 0)
		cout << endl << "ClapTrap " << this->_name
			<< " is dead!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		cout << endl << "ClapTrap " << this->_name
			<< " hit points dropped from " << this->_hitPoints;
		if (amount > this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		cout << " to " << this->_hitPoints << "!" << endl;
		if (this->_hitPoints == 0)
			cout << "ClapTrap " << this->_name
				<< " dies!" << endl;
	}
	else
		cout << endl << "Some anonymous narration says:" << endl
		<< "'Very odd, why are you attacking a corpse?'" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		cout << endl << "ClapTrap " << this->_name
			<< " cast REPAIR!" << endl;
		cout << "ClapTrap " << this->_name
			<< " hit points recovered from " << this->_hitPoints;
		this->_hitPoints += amount;
		cout << " to " << this->_hitPoints << "!" << endl;
		this->_energyPoints -= 1;
	}
	else if (this->_energyPoints <= 0)
		cout << endl << "Cannot Repair! ClapTrap " << this->_name
			<< " has no energy points left!" << endl;
}
