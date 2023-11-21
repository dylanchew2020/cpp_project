/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:16:55 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 13:53:51 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int i;

	Zombie* horde = zombieHorde(5, "Zombie");
	i = 0;
	while (i < 5)
		horde[i++].announce();	
	delete[] horde;
	return (0);
}
