/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:03:44 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 20:43:13 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	cout << "AMateria default constructor called" << endl;
}

AMateria::AMateria(const string& type)
{
	this->_type = type;
	cout << "AMateria constructor called" << endl;
}

AMateria::AMateria(const AMateria& amateria)
{
	*this = amateria;
	cout << "AMateria copy constructor called" << endl;
}

AMateria::~AMateria(void)
{
	cout << "AMateria destructor called" << endl;
}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	if (this != &amateria)
	{
		this->_type = amateria._type;
	}
	cout << "AMateria assignation operator called" << endl;
	return (*this);
}

const string& AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	cout << "* shoots nothing at " << target.getName() << " *" << endl;
}