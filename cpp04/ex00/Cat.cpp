/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:59:36 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 21:43:20 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(const Cat& cat)
{
	*this = cat;
	cout << "Cat copy constructor called" << endl;
}

Cat::~Cat(void)
{
	cout << "Cat destructor called" << endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
	}
	cout << "Cat assignment operator called" << endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	cout << "Meow" << endl;
}