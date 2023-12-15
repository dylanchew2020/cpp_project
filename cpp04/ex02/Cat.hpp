/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:59:39 by lchew             #+#    #+#             */
/*   Updated: 2023/12/15 17:40:50 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
		
	public:
		Cat(void);
		Cat(const Cat& cat);
		~Cat(void);
		
		Cat& operator=(const Cat& cat);
		void makeSound (void) const;
};

#endif