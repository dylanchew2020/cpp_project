/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:33:07 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 20:53:46 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	_type = "ice";
	cout << "Ice constructor called" << endl;
}

Ice::Ice(const Ice& materia)
{
	*this = materia;
	cout << "Ice copy constructor called" << endl;
}

Ice::~Ice(void)
{
	cout << "Ice destructor called" << endl;
}

Ice& Ice::operator=(const Ice& materia)
{
	if (this != &materia)
	{
		this->_type = materia._type;
	}
	cout << "Ice assignation operator called" << endl;
	return (*this);
}

AMateria* Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

