/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:47:31 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 21:00:54 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	cout << "Dog default constructor called" << endl;
}

Dog::Dog(const Dog& dog)
{
	*this = dog;
	cout << "Dog copy constructor called" << endl;
}

Dog::~Dog(void)
{
	cout << "Dog destructor called" << endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
	}
	cout << "Dog assignment operator called" << endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	cout << "Bark" << endl;
}