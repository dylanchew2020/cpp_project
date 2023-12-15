/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:01:40 by lchew             #+#    #+#             */
/*   Updated: 2023/12/15 17:40:36 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

typedef class Animal
{
	public:
		Animal(void);
		Animal(const Animal& animal);
		virtual ~Animal();
		
		Animal& operator=(const Animal& animal);
		
		string getType(void) const;
		
		virtual void makeSound(void) const = 0;
	
	protected:
		string _type;
} A_Animal;

#endif