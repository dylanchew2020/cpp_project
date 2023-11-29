/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:52 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/29 21:57:00 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed&			operator=(const Fixed& other);
		friend std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
		
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
		
		float toFloat(void) const;
		int toInt(void) const;
		
		private:
			int _fpvalue;
			static const int _fracbits;
};

#endif
