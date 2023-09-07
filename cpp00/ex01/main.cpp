/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:35 by lchew             #+#    #+#             */
/*   Updated: 2023/09/07 14:26:15 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "stdio.h"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			i;

	while (input != "EXIT")
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, input);
		i = 0;
		while (input[i] != '\0')
		{
			input[i] = toupper(input[i]);
			i++;
		}
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
	}
	return (0);
}
