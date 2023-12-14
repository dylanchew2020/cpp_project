#include "MateriaSource.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:31:20 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 19:31:21 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"

IMateriaSource::~IMateriaSource(void)
{
	// cout << "IMateriaSource destructor called" << endl;
}

MateriaSource::MateriaSource(void)
{
	std::fill(this->_slot, this->_slot + MAX_M_SLOT, nullptr);
	// cout << "IMateriaSource constructor called" << endl;
}

MateriaSource::MateriaSource(const MateriaSource& source)
{
	int idx = 0;
	while (idx < MAX_M_SLOT)
	{
		if (source._slot[idx] != nullptr)
			this->_slot[idx] = source._slot[idx]->clone();
		else
			this->_slot[idx] = nullptr;
		++idx;
	}
	// cout << "MateriaSource copy constructor called" << endl;
}

MateriaSource::~MateriaSource(void)
{
	int idx = 0;
	while (idx < MAX_M_SLOT)
	{
		if (this->_slot[idx] != nullptr)
			delete this->_slot[idx];
		++idx;
	}
	// cout << "MateriaSource destructor called" << endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& source)
{
	if (this != &source)
	{
		int idx = 0;
		while (idx < MAX_M_SLOT)
		{
			if (this->_slot[idx] != nullptr)
				delete this->_slot[idx];
			if (source._slot[idx] != nullptr)
				this->_slot[idx] = source._slot[idx]->clone();
			else
				this->_slot[idx] = nullptr;
			++idx;
		}
	}
	// cout << "MateriaSource assignation operator called" << endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia == nullptr || materia->getType() == "")
		return ;
	int idx = 0;
	while (idx < MAX_M_SLOT)
	{
		if (this->_slot[idx] == nullptr)
		{
			this->_slot[idx] = materia;
			break ;	
		}
		++idx;
	}
	cout << "Materia '" << materia->getType() << "' added to Source Slot " << idx << endl;
}

AMateria* MateriaSource::createMateria(const string& type)
{
	int idx = 0;
	while (idx < MAX_M_SLOT)
	{
		if (this->_slot[idx] != nullptr && this->_slot[idx]->getType() == type)
		{
			cout << "Materia '" << type << "' created from Source Slot " << idx << endl;
			return (this->_slot[idx]->clone());
		}
		++idx;
	}
	return (nullptr);
}