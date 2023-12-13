/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:05:06 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 22:20:09 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	cout << "Character constructor called" << endl;
	this->_name = "Anonymous";
	std::fill(this->_slot, this->_slot + MAX_SLOT, NULL);
}

Character::Character(const string& name)
{
	cout << "Character constructor called" << endl;
	this->_name = name;
	std::fill(this->_slot, this->_slot + MAX_SLOT, NULL);
}

Character::Character(const Character& i)
{
	this->_name = i.getName();
	int idx;
	while (idx < MAX_SLOT)
	{
		this->_slot[idx] = i._slot[idx]->clone();
		++idx;
	}
}

