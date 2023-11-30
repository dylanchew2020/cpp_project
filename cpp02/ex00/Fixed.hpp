/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:52 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/30 15:50:45 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		
		Fixed& operator=(const Fixed& fixed);
		
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
		
		private:
			int _fpvalue;
			static const int _fracbits;
};

#endif
