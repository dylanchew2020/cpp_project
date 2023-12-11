/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:50:49 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 21:51:14 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	cout << "WrongCat default constructor called" << endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat)
{
	*this = wrongCat;
	cout << "WrongCat copy constructor called" << endl;
}

WrongCat::~WrongCat(void)
{
	cout << "WrongCat destructor called" << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
	if (this != &wrongCat)
	{
		this->_type = wrongCat._type;
	}
	cout << "WrongCat assignment operator called" << endl;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	cout << "Meow" << endl;
}