/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:00:43 by julian            #+#    #+#             */
/*   Updated: 2021/12/07 11:56:02 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

#define RESET	"\033[0m"
#define BLUE	"\033[34m"

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {return (Account::_totalAmount);}
int	Account::getNbDeposits(void) {return (Account::_totalNbDeposits);}
int	Account::getNbWithdrawals(void) {return (Account::_totalNbWithdrawals);}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "]";
	std::cout << " accounts:" << BLUE << Account::getNbAccounts() << RESET;
	std::cout << ";total:" << BLUE << Account::getTotalAmount() << RESET;
	std::cout << ";deposits:" << BLUE << _totalNbDeposits << RESET;
	std::cout << ";withdrawals:" << BLUE << _totalNbWithdrawals << RESET << std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "]";
	std::cout << " index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";amount:" << BLUE << this->_amount << RESET;
	std::cout << ";deposits:" << BLUE << this->_nbDeposits << RESET;
	std::cout << ";wihdrawals:" << BLUE << this->_nbWithdrawals << RESET << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "]";
	std::cout << " index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << this->_amount << RESET;
	std::cout << ";deposit:" << BLUE << deposit << RESET;
	std::cout << ";amount:" << BLUE << (this->_amount += deposit) << RESET;
	std::cout << ";nb_deposits:" << BLUE << ++this->_nbDeposits << RESET << std::endl;

	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "]";
	std::cout << " index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << this->_amount << RESET;
	if (this->_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << BLUE << withdrawal << RESET;
	std::cout << ";amount:" << BLUE << (this->_amount -= withdrawal) << RESET;
	std::cout << ";nb_withdrawals:" << BLUE << ++this->_nbWithdrawals << RESET << std::endl;

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

void	Account::_displayTimestamp(void)
{
	time_t		now = time(0);
	struct tm	tstruct;
	char		buf[80];

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%X", &tstruct);
	std::string	s(buf);
	s.erase(11, 1);
	s.erase(13, 1);
	std::cout << s;
}

Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0)
{
	static int	index = 0;

	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "]";
	std::cout << " index:" << BLUE << index << RESET;
	std::cout << ";amount:" << BLUE << initial_deposit << RESET << ";created" << std::endl;

	this->_accountIndex = index++;
	this->_amount = initial_deposit;
	_nbAccounts = index;
	_totalAmount += initial_deposit;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::~Account(void)
{
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "]";
	std::cout << " index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";amount:" << BLUE << this->_amount << RESET << ";closed" << std::endl;
}
