/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:26:31 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 17:40:10 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void 				attack(void);
		
		std::string const	&getName(void);
		void 				setName(std::string name);
		
		Weapon 				*getWeapon(void);
		void 				setWeapon(Weapon &weapon);

	private:
		std::string			_name;
		Weapon 				*_weapon;
};

#endif
