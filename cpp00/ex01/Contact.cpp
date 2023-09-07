#include "Contact.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:15 by lchew             #+#    #+#             */
/*   Updated: 2023/08/20 13:39:16 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirstName(void)
{
	while (this->_firstName.empty())
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, this->_firstName);
		if (this->_firstName.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setLastName(void)
{
	while (this->_lastName.empty())
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, this->_lastName);
		if (this->_lastName.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setNickname(void)
{
	while (this->_nickname.empty())
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, this->_nickname);
		if (this->_nickname.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setPhoneNumber(void)
{
	while (this->_phoneNumber.empty())
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, this->_phoneNumber);
		if (this->_phoneNumber.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setDarkestSecret(void)
{
	while (this->_darkestSecret.empty())
	{
		std::cout << "Enter Darkest Secret: ";
		std::getline(std::cin, this->_darkestSecret);
		if (this->_darkestSecret.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
