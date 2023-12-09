/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:04:57 by lchew             #+#    #+#             */
/*   Updated: 2023/12/09 17:33:09 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point(void); // default constructor
		Point(const float x, const float y); // constructor
		Point(const Point& point); // copy constructor
		~Point(void); // destructor
		
		Point& operator=(const Point& point); // assignation operator overload
		
		Fixed getX(void) const;
		Fixed getY(void) const;
		
	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif