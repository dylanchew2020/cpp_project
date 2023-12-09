/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:52 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/12/09 18:57:07 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		/* CONSTRUCTORS */
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		
		/* OPERATOR OVERLOAD */
		Fixed&					operator=(const Fixed& fixed);
		bool					operator>(const Fixed& fixed) const;
		bool					operator<(const Fixed& fixed) const;
		bool					operator>=(const Fixed& fixed) const;
		bool					operator<=(const Fixed& fixed) const;
		bool					operator==(const Fixed& fixed) const;
		bool					operator!=(const Fixed& fixed) const;
		Fixed					operator+(const Fixed& fixed) const;
		Fixed					operator-(const Fixed& fixed) const;
		Fixed					operator*(const Fixed& fixed) const;
		Fixed					operator/(const Fixed& fixed) const;
		Fixed&					operator++(void);
		Fixed					operator++(int);
		Fixed&					operator--(void);
		Fixed					operator--(int);
		
		
		/* MEMBER FUNCTIONS */
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int 	toInt(void) const;
		
		/* STATIC FUNCTIONS */
		static Fixed& min(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
		static Fixed& max(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
		
		private:
			int _fpvalue;
			static const int _fracbits;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);


#endif
