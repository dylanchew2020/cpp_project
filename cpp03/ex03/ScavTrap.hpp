/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:00:06 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 18:47:19 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(string name);
		ScavTrap(const ScavTrap& ScavTrap);
		~ScavTrap(void);

		ScavTrap& operator=(const ScavTrap& ScavTrap);

		void attack(string const& target);
		void guardGate(void);
};

#endif
