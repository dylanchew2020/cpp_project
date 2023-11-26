/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:26:46 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/26 19:44:58 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harl [debug/info/warning/error]" << std::endl;
		return (1);
	}
	Harl	harl;
	std::string	level;
	
	level = argv[1];
	std::cout << "Single complain:" << std::endl;
	harl.complain(level);
	std::cout << std::endl;
	std::cout << "Filtered complain:" << std::endl;
	harl.filter(harl.getLevelCode(level));
	return (0);
}
