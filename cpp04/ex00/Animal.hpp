/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:36:01 by lchew             #+#    #+#             */
/*   Updated: 2023/12/14 13:51:55 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal
{
	protected:
		string _type;
		
	public:
		Animal(void);
		Animal(const Animal& animal);
		virtual ~Animal();
		
		Animal& operator=(const Animal& animal);
		
		string getType(void) const;
		
		virtual void makeSound(void) const;
};

#endif