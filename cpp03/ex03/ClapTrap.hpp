/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:48:17 by lchew             #+#    #+#             */
/*   Updated: 2023/12/10 20:37:19 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(string name);
		ClapTrap(const ClapTrap& ClapTrap);
		~ClapTrap(void);

		ClapTrap& operator=(const ClapTrap& ClapTrap);

		string getName(void) const;
		void setName(string name);

		int getHitpoints(void) const;
		void setHitpoints(int hitPoints);

		int getEnergyPoints(void) const;
		void setEnergyPoints(int energyPoints);

		int getAttackDamage(void) const;
		void setAttackDamage(int attackDamage);

		void attack(string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

};

#endif
