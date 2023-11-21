/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:26:32 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 17:33:51 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		
		void 				attack(void);
		
		std::string const 	&getName(void);
		void 				setName(std::string name);
		
		Weapon 				&getWeapon(void);

	private:
		std::string			_name;
		Weapon 				&_weapon;
};

#endif
