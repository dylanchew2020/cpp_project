/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:04:44 by lchew             #+#    #+#             */
/*   Updated: 2023/12/09 18:38:22 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/**
 * @brief Check if a point is inside a triangle
 * 
 * 
 *
 * REFERENCE: https://nerdparadise.com/math/pointinatriangle#:~:text=Cross%20Product%20Refresher&text=If%20AP%20%C3%97%20AB%2C%20BP,products%20have%20the%20same%20sign.
 *
 * @return true if the point is inside the triangle
 */
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// Calculate the cross product of the vectors - AP X AB
	Fixed AB = (point.getX() - a.getX()) * (b.getY() - a.getY()) - 
				(b.getX() - a.getX()) * (point.getY() - a.getY());
	std::cout << "AB: " << AB << std::endl;
	// Calculate the cross product of the vectors - BP X BC
	Fixed BC = (point.getX() - b.getX()) * (c.getY() - b.getY()) - 
				(c.getX() - b.getX()) * (point.getY() - b.getY());
	std::cout << "BC: " << BC << std::endl;
	// Calculate the cross product of the vectors - CP X CA
	Fixed CA = (point.getX() - c.getX()) * (a.getY() - c.getY()) - 
				(a.getX() - c.getX()) * (point.getY() - c.getY());
	std::cout << "CA: " << CA << std::endl;
	// Check if the cross products have the same sign
	// If AP × AB, BP × BC, and CP × CA all have the same sign, then P is inside triangle ABC. 
	// If not, then P is outside triangle ABC. 
	// If 2 of the cross products are 0 then P is at a corner. 
	// If 1 of the cross products is 0 then P is at the edge if the other two cross products have the same sign. 
	// If 1 cross product is 0, another one is positive, and another is negative, then P is outside ABC.
	if ((AB > 0 && BC > 0 && CA > 0) || (AB < 0 && BC < 0 && CA < 0))
		return (true);
	// else if ((AB == 0 && BC > 0 && CA > 0) || (AB == 0 && BC < 0 && CA < 0))
	// 	return (true);
	// else if ((BC == 0 && AB > 0 && CA > 0) || (BC == 0 && AB < 0 && CA < 0))
	// 	return (true);
	// else if ((CA == 0 && AB > 0 && BC > 0) || (CA == 0 && AB < 0 && BC < 0))
	// 	return (true);
	else
		return (false);
		
	
}

