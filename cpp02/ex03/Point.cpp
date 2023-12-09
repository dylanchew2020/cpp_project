/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:04:47 by lchew             #+#    #+#             */
/*   Updated: 2023/12/09 18:14:20 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : _x(0), _y(0) {
	// std::cout << "Point default constructor called" << std::endl;
}
Point::~Point(void) {
	// std::cout << "Point destructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	// std::cout << "Point float constructor called" << std::endl;
}

Point::Point(const Point& point) : _x(point._x), _y(point._y) {
	// std::cout << "Point copy constructor called" << std::endl;
}
	

Point& Point::operator=(const Point& point)
{
	(void)point;
	return (*this);
}	

Fixed Point::getX(void) const {
	return (this->_x);
}

Fixed Point::getY(void) const {
	return (this->_y);
}