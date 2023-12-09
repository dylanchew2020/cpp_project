/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:48 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/12/09 18:57:59 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

/* 
	Modern C++ compilers often apply an optimization called Return Value 
	Optimization (RVO) or Copy Elision. This optimization can eliminate 
	the need for a copy and directly construct b from the temporary 
	object, bypassing the copy constructor.
 */
int main( void ) 
{
	// // 3 Triangle points
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(0.0f, 5.0f);
	Point point(5.0f, 5.0f);
	
	// // another set of points
	// Point a(1.0f, 3.0f);
	// Point b(3.0f, 7.0f);
	// Point c(5.0f, 1.0f);
	// Point point(3.0f, 7.0f);
	
	
	if (bsp(a, b, c, point) == true)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;
	
	return 0;
}
