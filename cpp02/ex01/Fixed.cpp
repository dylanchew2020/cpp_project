/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:58 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/29 22:03:37 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracbits = 8;

Fixed::Fixed(void) : _fpvalue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _fpvalue(0)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpvalue = value << this->_fracbits;
}

Fixed::Fixed(const float value) : _fpvalue(0)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpvalue = value * (1 << this->_fracbits);
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	// this->_fpvalue = fixed.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_fpvalue = fixed.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{	
	os << fixed.toFloat();
	return (os);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fpvalue / (float)(1 << this->_fracbits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpvalue);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fpvalue = raw;
}