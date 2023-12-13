/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:04:13 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 21:49:26 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATEIRA_HPP
# define AMATEIRA_HPP

# include <iostream>
# include <string>
# include "Character.hpp"

using std::string;
using std::cout;
using std::endl;

class AMateria
{
	protected:
		string _type;
	
	public:
		// AMateria(void);
		// AMateria(const string& type);
		// AMateria(const AMateria& amateria);
		virtual ~AMateria(void);
		
		// AMateria& operator=(const AMateria& amateria);
		
	
		const string& getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif