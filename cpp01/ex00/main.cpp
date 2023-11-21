/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:16:55 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 11:59:40 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	The main function creates 
	- a Zombie on the main stack, 
	- a Zombie on the heap, and
	- a Zombie on the randomChump function stack.
	The Zombie created by the randomChump function is destroyed when the 
	randomChump function ends.
	The Zombie on the heap is destroyed when the memory allocated is deleted.
	The Zombie on the main stack is destroyed when the main function ends.
	
*/
int main(void)
{
	Zombie zombie("Constructor");
	Zombie* heap = newZombie("Heap");
	std::cout << "New Zombie is " << heap->getName() << "!!!" << std::endl;
	randomChump("Stack");
	delete heap;
	return (0);
}
