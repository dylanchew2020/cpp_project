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
#include <iomanip>
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
	this->_firstName.clear();
	while (this->_firstName.empty())
	{
		std::cout << std::setw(20) << std::left << "Enter First Name" << ": ";
		std::getline(std::cin, this->_firstName);
		if (this->_firstName.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setLastName(void)
{
	this->_lastName.clear();
	while (this->_lastName.empty())
	{
		std::cout << std::setw(20) << std::left << "Enter Last Name" << ": ";
		std::getline(std::cin, this->_lastName);
		if (this->_lastName.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setNickname(void)
{
	this->_nickname.clear();
	while (this->_nickname.empty())
	{
		std::cout << std::setw(20) << std::left << "Enter Nickname" << ": ";
		std::getline(std::cin, this->_nickname);
		if (this->_nickname.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setPhoneNumber(void)
{
	this->_phoneNumber.clear();
	while (this->_phoneNumber.empty())
	{
		std::cout << std::setw(20) << std::left << "Enter Phone Number" << ": ";
		std::getline(std::cin, this->_phoneNumber);
		if (this->_phoneNumber.empty())
			std::cout << "This field cannot be left empty" << std::endl;
	}
	return ;
}

void	Contact::setDarkestSecret(void)
{
	this->_darkestSecret.clear();
	while (this->_darkestSecret.empty())
	{
		std::cout << std::setw(20) << std::left << "Enter Darkest Secret" << ": ";
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
