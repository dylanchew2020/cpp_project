/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:36:01 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 21:52:35 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& wrongAnimal);
		virtual ~WrongAnimal();
		
		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
		
		string getType(void) const;
		
		void makeSound(void) const;
	
	protected:
		string _type;	
};

#endif