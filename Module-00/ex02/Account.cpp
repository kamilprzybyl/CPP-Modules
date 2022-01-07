#include <iostream>
#include <ctime>
#include "Account.hpp"

bool	Account::makeWithdrawal( int withdrawal) {

	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";withdrawal:" << withdrawal;
	if (Account::_amount - withdrawal < 0)
	{
		std::cout << ";refused" << std::endl;
		return false;
	}
	Account::_amount -= withdrawal;
	Account::_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;

	return true;
}

void	Account::makeDeposit( int deposit ) {

	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";deposit:" << deposit;
	Account::_amount += deposit;
	Account::_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;
}

void	Account::displayStatus( void ) const {

	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayAccountsInfos( void ) {

	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {

	time_t		now = time(0);
	struct tm	tstruct;
	char		buf[16];

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << buf;
}

Account::Account( int initial_deposit ) {

	static int	index = 0;

	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << index;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;

	this->_accountIndex = index++;
	this->_amount = initial_deposit;
	_nbAccounts = index;
	_totalAmount += initial_deposit;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::~Account( void ) {
	
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}