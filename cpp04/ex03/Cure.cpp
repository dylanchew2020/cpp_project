/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:33:13 by lchew             #+#    #+#             */
/*   Updated: 2023/12/14 13:00:53 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void)
{
	_type = "cure";
	// cout << "Cure constructor called" << endl;
}

Cure::Cure(const Cure& materia)
{
	*this = materia;
	// cout << "Cure copy constructor called" << endl;
}

Cure::~Cure(void)
{
	// cout << "Cure destructor called" << endl;
}

Cure& Cure::operator=(const Cure& materia)
{
	if (this != &materia)
	{
		this->_type = materia._type;
	}
	// cout << "Cure assignation operator called" << endl;
	return (*this);
}

AMateria* Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "’s wounds *" << endl;
}