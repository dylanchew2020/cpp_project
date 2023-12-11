/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:05:25 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 18:47:28 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	cout << endl << "FragTrap default constructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	cout << endl << "FragTrap name constructor called" << endl;
	cout << this->getName() << " evolved into a FragTrap!" << endl;
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& FragTrap)
{
	*this = FragTrap;
	cout << endl << "FragTrap copy constructor called" << endl;
	cout << "This object name is now: " << this->getName() << endl;
}

FragTrap::~FragTrap(void)
{
	cout << endl << "FragTrap destructor called" << endl;
}

FragTrap& FragTrap::operator=(const FragTrap& FragTrap)
{
	if (this != &FragTrap)
	{
		this->setName(FragTrap.getName());
		this->setHitpoints(FragTrap.getHitpoints());
		this->setEnergyPoints(FragTrap.getEnergyPoints());
		this->setAttackDamage(FragTrap.getAttackDamage());
	}
	cout << endl << "FragTrap assignment operator called" << endl;
	cout << "This object name is now: " << this->getName() << endl;
	return (*this);
}

void FragTrap::attack(string const& target)
{
	if (this->getEnergyPoints() > 0 && this->getHitpoints() > 0)
	{
		cout << endl << "FragTrap " << this->getName()
			<< " attacks " << target
			<< ", causing " << this->getAttackDamage()
			<< " points of damage!" << endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else if (this->getEnergyPoints() <= 0)
		cout << endl << "Cannot Attack! FragTrap " << this->getName()
			<< " has no energy points left!" << endl;
	else if (this->getHitpoints() <= 0)
		cout << endl << "Cannot Attack! FragTrap " << this->getName()
			<< " has no hit points left!" << endl;
}

void FragTrap::highFivesGuys(void)
{
	cout << endl << "FragTrap " << this->getName()
		<< " wants to high five you!" << endl;
}