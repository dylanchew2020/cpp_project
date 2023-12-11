/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:05:54 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 19:56:23 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(string name);
		FragTrap(const FragTrap& FragTrap);
		~FragTrap(void);

		FragTrap& operator=(const FragTrap& FragTrap);

		void attack(string const& target);
		void highFivesGuys(void);
};

#endif