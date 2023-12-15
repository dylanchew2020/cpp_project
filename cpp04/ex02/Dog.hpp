/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:47:34 by lchew             #+#    #+#             */
/*   Updated: 2023/12/15 17:40:58 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
		
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog(void);
		
		Dog& operator=(const Dog& dog);
		void makeSound(void) const;
		void angryDog(void) const;
};	

#endif