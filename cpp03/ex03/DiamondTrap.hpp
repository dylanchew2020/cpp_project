/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:29:19 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 18:33:23 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(string name);
		DiamondTrap(const DiamondTrap& DiamondTrap);
		~DiamondTrap(void);

		DiamondTrap& operator=(const DiamondTrap& DiamondTrap);

		void attack(string const& target);
		void whoAmI(void);
		
		private:
			string _name;
};

#endif