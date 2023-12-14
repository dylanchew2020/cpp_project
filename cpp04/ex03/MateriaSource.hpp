/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:31:19 by lchew             #+#    #+#             */
/*   Updated: 2023/12/14 12:09:32 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

# define MAX_M_SLOT 4

using std::string;
using std::cout;
using std::endl;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void);
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(const string& type) = 0;
};

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _slot[MAX_M_SLOT];
		
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& source);
		~MateriaSource(void);
	
		MateriaSource& operator=(const MateriaSource& source);
	
		void learnMateria(AMateria* materia);
		AMateria* createMateria(const string& type);
};

#endif