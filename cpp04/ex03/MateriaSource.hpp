/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:31:19 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 20:06:51 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

using std::string;
using std::cout;
using std::endl;

class IMateriaSource
{
	protected:
		AMateria* _slot[4];
		
	public:
		IMateriaSource(void);
		IMateriaSource(const IMateriaSource& source);
		virtual ~IMateriaSource(void);
	
		IMateriaSource& operator=(const IMateriaSource& source);
	
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(const string& type) = 0;
};

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& source);
		virtual ~MateriaSource(void);
	
		MateriaSource& operator=(const MateriaSource& source);
	
		void learnMateria(AMateria* materia);
		AMateria* createMateria(const string& type);
};

#endif