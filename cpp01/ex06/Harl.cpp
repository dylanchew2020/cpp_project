/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:26:53 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/26 19:43:12 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl created" << std::endl;
	_f[DEBUG] = &Harl::_debug;
    _f[INFO] = &Harl::_info;
    _f[WARNING] = &Harl::_warning;
    _f[ERROR] = &Harl::_error;
    _levels[DEBUG] = "debug";
    _levels[INFO] = "info";
    _levels[WARNING] = "warning";
    _levels[ERROR] = "error";	
}

Harl::~Harl(void)
{
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "[DEBUG] I'm a debug message" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[INFO] I'm an info message" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[WARNING] I'm a warning message" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ERROR] I'm an error message" << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	while (i < 4 && _levels[i] != level)
		i++;
	if (i < 4)
		(this->*_f[i])();
	else
		std::cout << "Invalid level" << std::endl;
}

void Harl::filter(int level)
{
	int i = 0;
	switch (level)
	{
		case DEBUG:
			i = DEBUG;
			break;
		case INFO:
			i = INFO;
			break;
		case WARNING:
			i = WARNING;
			break;
		case ERROR:
			i = ERROR;
			break;
		case ERROR + 1:
			complain("invalid");
			return ;
	}
	while (i <= ERROR)
		complain(_levels[i++]);
}

int	Harl::getLevelCode(std::string level)
{
	std::transform(level.begin(), level.end(), level.begin(), ::tolower);
	int i = 0;
	while (i <= ERROR && _levels[i] != level)
		i++;
	if (i <= ERROR)
		return (i);
	else
		return (ERROR + 1);
}
