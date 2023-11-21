/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:25:33 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 17:22:07 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	setName(name);
	std::cout << getName() << " takes the " << getWeapon().getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << getName() << " dies" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}

std::string const &HumanA::getName(void)
{
	return (this->_name);
}

void HumanA::setName(std::string name)
{
	this->_name = name;
	std::cout << "His name is " << getName() << std::endl;
}

Weapon &HumanA::getWeapon(void)
{
	return (this->_weapon);
}
