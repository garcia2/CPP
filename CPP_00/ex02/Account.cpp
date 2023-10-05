/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:24:18 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/05 12:05:23 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


/*--|Constructors & Destructors|----------------------------------------------*/

Account::Account( int initial_deposit ) : _nbDeposits(initial_deposit) {

	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account( void ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

/*----------------------------------------------|Constructors & Destructors|--*/



/*--|Object functions :: Public|----------------------------------------------*/

void	Account::makeDeposit( int deposit ) {
	
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << (this->_amount - deposit) << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount >= withdrawal) {
		
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount += withdrawal;
		Account::_totalNbWithdrawals++;
		
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		
		return (1);
	}
	else {

		std::cout << "withdrawal:refused" << std::endl;
		
		return (0);
	}
}

int		Account::checkAmount( void ) const {
	
	return (0);
}

void	Account::displayStatus( void ) const {
	
	return;
}

/*----------------------------------------------|Object functions :: Public|--*/



/*--|Class functions :: Public|-----------------------------------------------*/

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {

	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

/*-----------------------------------------------|Class functions :: Public|--*/


/*--|Class functions :: Private|----------------------------------------------*/

void	Account::_displayTimestamp( void ) {

	std::time_t rawtime;
	struct tm	*timeinfo;
	char		buffer[16];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 16, "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buffer << "] ";
}

/*----------------------------------------------|Class functions :: Private|--*/



/*--|Class Attributes|--------------------------------------------------------*/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*--------------------------------------------------------|Class Attributes|--*/
