/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:48:45 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 21:49:13 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	cout << "WrongAnimal default constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	*this = wrongAnimal;
	cout << "WrongAnimal copy constructor called" << endl;
}

WrongAnimal::~WrongAnimal(void)
{
	cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	if(this != &wrongAnimal)
	{
		this->_type = wrongAnimal._type;
	}
	cout << "WrongAnimal assignment operator called" << endl;
	return (*this);
}

string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	cout << "WrongAnimal sound" << endl;
}