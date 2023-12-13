/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:35:48 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 15:52:27 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	
	// delete j;//should not create a leak
	// delete i;
	
	const int size = 10;
	
	Animal *array[size];
	// Dog* dog;
	int i = 0;

	while (i < size)
	{
		if (i % 2 == 0)
		{
			array[i] = new Dog();
			array[i]->makeSound();
			// array[i]->angryDog();
			// dog = dynamic_cast<Dog*>(array[i]);
			// dog->angryDog();
		}
		else
		{
			array[i] = new Cat();
			array[i]->makeSound();
		}
		
		i++;
	}
	
	
	i = 0;
	while (i < size)
	{
		delete array[i];
		i++;
	}


	return (0);
}