/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:00:03 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 18:47:12 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	cout << endl << "ScavTrap default constructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	cout << endl << "ScavTrap name constructor called" << endl;
	cout << this->getName() << " evolved into a ScavTrap!" << endl;
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap)
{
	*this = ScavTrap;
	cout << endl << "ScavTrap copy constructor called" << endl;
	cout << "This object name is now: " << this->getName() << endl;
}

ScavTrap::~ScavTrap(void)
{
	cout << endl << "ScavTrap destructor called" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ScavTrap)
{
	if (this != &ScavTrap)
	{
		this->setName(ScavTrap.getName());
		this->setHitpoints(ScavTrap.getHitpoints());
		this->setEnergyPoints(ScavTrap.getEnergyPoints());
		this->setAttackDamage(ScavTrap.getAttackDamage());
	}
	cout << endl << "ScavTrap assignment operator called" << endl;
	cout << "This object name is now: " << this->getName() << endl;
	return (*this);
}

void ScavTrap::attack(string const& target)
{
	if (this->getEnergyPoints() > 0 && this->getHitpoints() > 0)
	{
		cout << endl << "ScavTrap " << this->getName()
			<< " attacks " << target
			<< ", causing " << this->getAttackDamage()
			<< " points of damage!" << endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else if (this->getEnergyPoints() <= 0)
		cout << endl << "Cannot Attack! ScavTrap " << this->getName()
			<< " has no energy points left!" << endl;
	else if (this->getHitpoints() <= 0)
		cout << endl << "ScavTrap " << this->getName()
			<< " is dead!" << endl;
}

void ScavTrap::guardGate(void)
{
	cout << endl << "ScavTrap " << this->getName()
		<< " has entered in Gate keeper mode." << endl;
}
