/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:05:06 by lchew             #+#    #+#             */
/*   Updated: 2023/12/14 13:26:37 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

ICharacter::~ICharacter(void)
{
	// cout << "ICharacter destructor called" << endl;
}

Character::Character(void)
{
	this->_name = "Anonymous";
	std::fill(this->_slot, this->_slot + MAX_C_SLOT, nullptr);
	// cout << "Character constructor called" << endl;
}

Character::Character(const string& name)
{
	this->_name = name;
	std::fill(this->_slot, this->_slot + MAX_C_SLOT, nullptr);
	// cout << "Character constructor called" << endl;
}

Character::Character(const Character& i)
{
	this->_name = i.getName();
	int idx = 0;
	while (idx < MAX_C_SLOT)
	{
		if (i._slot[idx] != nullptr)
			this->_slot[idx] = i._slot[idx]->clone();
		else
			this->_slot[idx] = nullptr;
		++idx;
	}
	// cout << "Character copy constructor called" << endl;
}

Character::~Character(void)
{
	int idx = 0;
	while (idx < MAX_C_SLOT)
	{
		if (this->_slot[idx] != nullptr)
			delete this->_slot[idx];
		++idx;
	}
	// cout << "Character destructor called" << endl;
}

Character& Character::operator=(const Character& i)
{
	if (this != &i)
	{
		this->_name = i.getName();
		int idx = 0;
		while (idx < MAX_C_SLOT)
		{
			if (this->_slot[idx] != nullptr)
				delete this->_slot[idx];
			if (i._slot[idx] != nullptr)
				this->_slot[idx] = i._slot[idx]->clone();
			else
				this->_slot[idx] = nullptr;
			++idx;
		}
	}
	// cout << "Character assignation operator called" << endl;
	return (*this);
}

const string& Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (m == nullptr || m->getType() == "")
		return ;
	int idx = 0;
	while (idx < MAX_C_SLOT)
	{
		if (this->_slot[idx] == nullptr)
		{
			this->_slot[idx] = m;
			break ;
		}
		++idx;		
	}
	cout << this->getName() << " equiped '" << m->getType() << "' on Character Slot " << idx << endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= MAX_C_SLOT)
		return ;
	if (this->_slot[idx] == nullptr)
		return ;
	AMateria* tmp = this->_slot[idx];
	this->_slot[idx] = nullptr;
	cout << this->getName() << " unequiped '" << tmp->getType() << "' from Character Slot " << idx << endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= MAX_C_SLOT)
		return ;
	if (this->_slot[idx] == nullptr)
		return ;
	this->_slot[idx]->use(target);
}

AMateria* Character::getSlot(int idx) const
{
	if (idx < 0 || idx >= MAX_C_SLOT)
		return (nullptr);
	return (this->_slot[idx]);
}