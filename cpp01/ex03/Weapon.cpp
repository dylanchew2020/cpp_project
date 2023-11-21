/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:25:30 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 17:18:38 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon(void)
{
	std::cout << getType() << " destroyed" << std::endl;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << getType() << " set" << std::endl;
}

std::string const &Weapon::getType(void)
{
	return (this->_type);
}
