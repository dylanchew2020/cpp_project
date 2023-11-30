/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:48 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/30 23:27:22 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* 
	Modern C++ compilers often apply an optimization called Return Value 
	Optimization (RVO) or Copy Elision. This optimization can eliminate 
	the need for a copy and directly construct b from the temporary 
	object, bypassing the copy constructor.
 */
int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

/* int main() {
    Fixed a;
    Fixed b(Fixed(5.05f) * Fixed(2));
    Fixed c(3.5f);
    Fixed d(2);
    Fixed e;
	
	// Testing overloaded constructor
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

    // Testing arithmetic operators
    e = a + b;
    std::cout << "a + b = " << e << std::endl;
    e = b - a;
    std::cout << "b - a = " << e << std::endl;
    e = c * d;
    std::cout << "c * d = " << e << std::endl;
    e = c / d;
    std::cout << "c / d = " << e << std::endl;

    // Testing comparison operators
    std::cout << "b > c: " << (b > c) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "b >= d: " << (b >= d) << std::endl;
    std::cout << "b <= d: " << (b <= d) << std::endl;
    std::cout << "b == d: " << (b == d) << std::endl;
    std::cout << "b != d: " << (b != d) << std::endl;

    // Testing increment and decrement operators
    std::cout << "c++: " << c++ << std::endl;
    std::cout << "++c: " << ++c << std::endl;
    std::cout << "d--: " << d-- << std::endl;
    std::cout << "--d: " << --d << std::endl;

    // Testing static min and max functions
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;

    // Testing toFloat and toInt member functions
    std::cout << "b.toFloat(): " << b.toFloat() << std::endl;
    std::cout << "d.toInt(): " << d.toInt() << std::endl;

    return 0;
} */


// int main() {
//     Fixed a(5.05f);
//     Fixed b(3.03f);

//     // Non-const references
//     Fixed& minRef = Fixed::min(a, b);
//     std::cout << "Min (non-const ref): " << minRef << std::endl;

//     // Modify the object returned by min
//     minRef.setRawBits(1000);  // Assuming such a method exists
//     std::cout << "Modified Min: " << minRef << std::endl;

//     // Const references
//     const Fixed c(2.02f);
//     const Fixed d(4.04f);

//     const Fixed& minConstRef = Fixed::min(c, d);
//     std::cout << "Min (const ref): " << minConstRef << std::endl;

//     // Attempt to modify the object returned by min will result in a compile error
//     // minConstRef.setRawBits(1000); // Uncommenting this line will cause a compile error

//     return 0;
// }
