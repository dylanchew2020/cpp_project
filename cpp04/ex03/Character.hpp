/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:22:17 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 22:20:05 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

using std::string;
using std::cout;
using std::endl;

# define MAX_SLOT 4

class ICharacter
{
	public:
		virtual ~ICharacter(void);
		virtual const string& getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	private:
		string _name;
		AMateria* _slot[MAX_SLOT];
		
	public:
		Character(void);
		Character(const string& name);
		Character(const Character& i);
		~Character(void);
		
		Character& operator=(const Character& i);
		const string& getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
}

#endif