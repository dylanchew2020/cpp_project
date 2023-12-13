/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:35:56 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 22:09:31 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	cout << "\nAnimal default constructor called" << endl;
}

Animal::Animal(const Animal& animal)
{
	*this = animal;
	cout << "Animal copy constructor called" << endl;
}

Animal::~Animal(void)
{
	cout << "Animal destructor called" << endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	if(this != &animal)
	{
		this->_type = animal._type;
	}
	cout << "Animal assignment operator called" << endl;
	return (*this);
}

string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	cout << "Animal sound" << endl;
}