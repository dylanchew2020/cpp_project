/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:23 by lchew             #+#    #+#             */
/*   Updated: 2023/11/29 17:54:29 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _cellWidth(10), _phonebookSize(8)
{
	std::cout << "Running PhoneBook Program..." << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Closing PhoneBook..." << std::endl;
	return ;
}

void	PhoneBook::addContact(void)
{
	this->_index %= this->_phonebookSize;
	this->_contact[this->_index].setFirstName();
	this->_contact[this->_index].setLastName();
	this->_contact[this->_index].setNickname();
	this->_contact[this->_index].setPhoneNumber();
	this->_contact[this->_index].setDarkestSecret();
	++this->_index;
	std::cout << "[Info] Contact added" << std::endl;
	if (this->_contactCount < this->_phonebookSize)
		this->_contactCount += 1;
	return ;
}

void	PhoneBook::searchContact(void)
{
	int index;

	if (this->_contactCount == 0)
	{
		std::cout << "[Info] No contacts available" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << std::right << "Index" << " | ";
	std::cout << std::setw(10) << std::right << "First Name" << " | ";
	std::cout << std::setw(10) << std::right << "Last Name" << " | ";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	index = 0;
	while (index < this->_contactCount)
	{
		std::cout << std::setw(10) << std::right << index << " | ";
		std::cout << std::setw(10) << std::right << truncate(this->_contact[index].getFirstName()) << " | ";
		std::cout << std::setw(10) << std::right << truncate(this->_contact[index].getLastName()) << " | ";
		std::cout << std::setw(10) << std::right << truncate(this->_contact[index].getNickname()) << std::endl;
		index += 1;
	}
	this->printContact();
	return ;
}

void	PhoneBook::printContact(void)
{
	int index;
    bool validInput = false;

    while (!validInput)
    {
        std::cout << "Enter index of contact to view: ";
        std::cin >> index;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "[Error] Invalid input. Please enter an integer." << std::endl;
        }
        else if (index > this->_contactCount - 1 || index < 0)
        {
            std::cout << "[Error] Invalid index" << std::endl;
        }
        else
        {
            validInput = true;
        }
    }
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	std::cout << std::setw(15) << std::left << "First name" << ": " << this->_contact[index].getFirstName() << std::endl;
	std::cout << std::setw(15) << std::left << "Last name" << ": " << this->_contact[index].getLastName() << std::endl;
	std::cout << std::setw(15) << std::left << "Nickname" << ": " << this->_contact[index].getNickname() << std::endl;
	std::cout << std::setw(15) << std::left << "Phone number" << ": " << this->_contact[index].getPhoneNumber() << std::endl;
	std::cout << std::setw(15) << std::left << "Darkest secret" << ": " << this->_contact[index].getDarkestSecret() << std::endl;
}

std::string PhoneBook::truncate(std::string str)
{
	std::string result;

	result = str;
	if (str.length() > this->_cellWidth)
	{
		result.resize(this->_cellWidth);
		result[9] = '.';
	}
	return (result);
}

int	PhoneBook::_index = 0;
int	PhoneBook::_contactCount = 0;
