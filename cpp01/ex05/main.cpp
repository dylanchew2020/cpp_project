/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:26:46 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/22 16:29:28 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::cout << "Harl is complaing about:" << std::endl;
	std::cout << "1. DEBUG" << std::endl;
	std::cout << "2. INFO" << std::endl;
	std::cout << "3. WARNING" << std::endl;
	std::cout << "4. ERROR" << std::endl;
	std::string level;
	std::cin >> level;
	harl.complain(level);
	return (0);
}
