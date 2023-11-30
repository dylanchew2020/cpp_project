/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:58 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/30 23:13:38 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracbits = 8;

/* 
	CONSTRUCTORS
*/
Fixed::Fixed(void) : _fpvalue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}
/**
 * @brief Overloaded constructor that takes in an int value
 *
 * This constructor is called when the argument passed in is an int value.
 * The int value is stored as fixed point value in the _fpvalue member 
 * variable. The int value is shifted left by the number of fractional bits
 * to convert it to a fixed point value.
 * 
 * @param value The int value to be stored in the _fpvalue member variable
 *
 * @return 
 */
Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fpvalue = value << this->_fracbits;
}

/**
 * @brief Overloaded constructor that takes in a float value
 *
 * This constructor is called when the argument passed in is a float value.
 * The float value is stored as fixed point value in the _fpvalue member 
 * variable. The fixed point value is calculated by multiplying the float
 * value with 2 raised to the power of the number of fractional bits.
 * 
 * E.g. if the number of fractional bits is 8, the fixed point value is
 * calculated as follows:
 * float * (2 ^ 8) = float * 256
 * 
 * @param value The float value to be stored in the _fpvalue member variable
 *
 * @return 
 */
Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fpvalue = roundf(value * (1 << this->_fracbits));
}

Fixed::Fixed(const Fixed& fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*
	DESTRUCTOR
*/
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/*
	OPERATOR OVERLOADS
*/
Fixed&	Fixed::operator=(const Fixed& fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_fpvalue = fixed.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{	
	// std::cout << "Output stream operator called" << std::endl;
	os << fixed.toFloat();
	return (os);
}

bool	Fixed::operator>(const Fixed& fixed) const
{
	// std::cout << "Greater than operator called" << std::endl;
	return (this->_fpvalue > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return (this->_fpvalue < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return (this->_fpvalue >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return (this->_fpvalue <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return (this->_fpvalue == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return (this->_fpvalue != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	// std::cout << "Addition operator called" << std::endl;
	return (Fixed(toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	// std::cout << "Subtraction operator called" << std::endl;
	return (Fixed(toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	// std::cout << "Multiplication operator called" << std::endl;
	return (Fixed(toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	// std::cout << "Division operator called" << std::endl;
	return (Fixed(toFloat() / fixed.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	// std::cout << "Pre-increment operator called" << std::endl;
	++this->_fpvalue;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	// std::cout << "Post-increment operator called" << std::endl;
	Fixed temp(*this);
	++this->_fpvalue;
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	// std::cout << "Pre-decrement operator called" << std::endl;
	--this->_fpvalue;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	// std::cout << "Post-decrement operator called" << std::endl;
	Fixed temp(*this);
	--this->_fpvalue;
	return (temp);
}

/*
	MEMBER FUNCTIONS
*/
/**
 * @brief Converts the fixed-point value to a float.
 *
 * This function converts the fixed-point value stored in the `_fpvalue` member
 * to a floating-point number. It uses the `_fracbits` member to determine the
 * scale of the conversion.
 *
 * @return The floating-point representation of the fixed-point value.
 */
float Fixed::toFloat(void) const
{
	return (static_cast<float>((this->_fpvalue) / static_cast<float>((1 << this->_fracbits))));
}

/**
 * @brief Converts the fixed-point value to an integer.
 *
 * This function converts the fixed-point value stored in the `_fpvalue` member
 * to an integer. It uses the `_fracbits` member to determine the scale of the
 * conversion.
 *
 * @return The integer representation of the fixed-point value.
 */
int Fixed::toInt(void) const
{
	return (this->_fpvalue >> this->_fracbits);
}

/**
 * @brief Returns the raw value of the fixed-point value.
 *
 * This function returns the raw value of the fixed-point value stored in the
 * `_fpvalue` member.
 *
 * @return The raw value of the fixed-point value.
 */
int	Fixed::getRawBits(void) const
{
	return (this->_fpvalue);
}

/**
 * @brief Sets the raw value of the fixed-point value.
 *
 * This function sets the raw value of the fixed-point value stored in the
 * `_fpvalue` member.
 *
 * @param raw The raw value of the fixed-point value.
 */
void	Fixed::setRawBits(int const raw)
{
	this->_fpvalue = raw;
}

/*
	STATIC FUNCTIONS
*/
/**
 * @brief Returns the fixed-point value with the lowest value.
 *
 * This function returns the fixed-point value with the lowest value between
 * the two fixed-point values passed as arguments.
 *
 * @param fixed1 The first fixed-point value to be compared.
 * @param fixed2 The second fixed-point value to be compared.
 *
 * @return The fixed-point value with the lowest value.
 */
Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

/**
 * @brief Returns the fixed-point value with the lowest value.
 *
 * This function returns the fixed-point value with the lowest value between
 * the two fixed-point values passed as arguments.
 *
 * @param fixed1 The first fixed-point value to be compared.
 * @param fixed2 The second fixed-point value to be compared.
 *
 * @return The fixed-point value with the lowest value.
 */
const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

/**
 * @brief Returns the fixed-point value with the highest value.
 *
 * This function returns the fixed-point value with the highest value between
 * the two fixed-point values passed as arguments.
 *
 * @param fixed1 The first fixed-point value to be compared.
 * @param fixed2 The second fixed-point value to be compared.
 *
 * @return The fixed-point value with the highest value.
 */
Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	else
		return (fixed2);
}

/**
 * @brief Returns the fixed-point value with the highest value.
 *
 * This function returns the fixed-point value with the highest value between
 * the two fixed-point values passed as arguments.
 *
 * @param fixed1 The first fixed-point value to be compared.
 * @param fixed2 The second fixed-point value to be compared.
 *
 * @return The fixed-point value with the highest value.
 */
const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	else
		return (fixed2);
}