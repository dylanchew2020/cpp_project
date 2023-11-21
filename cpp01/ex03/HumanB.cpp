/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:25:31 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 17:41:14 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	setName(name);
	std::cout << getName() << " has no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << getName() << " dies" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << getName() << " attacks with their " << getWeapon()->getType() << std::endl;
}

std::string const &HumanB::getName(void)
{
	return (this->_name);
}

void HumanB::setName(std::string name)
{
	this->_name = name;
	std::cout << "His name is " << getName() << std::endl;
}

Weapon *HumanB::getWeapon(void)
{
	return (this->_weapon);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << getName() << " takes the " << getWeapon()->getType() << std::endl;
}
