/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:21:54 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 13:50:12 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	int i;
	
	i = 0;
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
