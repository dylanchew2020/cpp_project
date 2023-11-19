/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:21:31 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/19 21:41:38 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	std::time_t currentTime = std::time(0);
	std::tm *localTime = std::localtime(&currentTime);
	std::cout << "	[" << (1900 + localTime->tm_year);
	std::cout << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1);
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << localTime->tm_sec;
	std::cout << "] ";
}

int		Account::getNbAccounts(void)
{
	std::cout << "accounts:" << _nbAccounts;
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	std::cout << "total:" << _totalAmount;
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	std::cout << "deposits:" << _totalNbDeposits;
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	getNbAccounts();
	std::cout << ";";
	getTotalAmount();
	std::cout << ";";
	getNbDeposits();
	std::cout << ";";
	getNbWithdrawals();
	std::cout << std::endl;
	return ;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;	
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (checkAmount() < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}
