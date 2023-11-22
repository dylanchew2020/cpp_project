/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:26:53 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/22 16:46:41 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] I'm a debug message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] I'm an info message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] I'm a warning message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] I'm an error message" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	const int _level[4] = {DEBUG, INFO, WARNING, ERROR};
	std::transform(level.begin(), level.end(), level.begin(), ::tolower);
	int i = 0;
	while (i < 4 && levels[i] != level && std::atoi(level.c_str()) - 1 != _level[i])
		i++;
	if (i < 4)
		(this->*f[i])();
	else
		std::cout << "Invalid level" << std::endl;
}
