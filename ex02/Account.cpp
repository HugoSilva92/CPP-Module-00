#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(void){
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account( int initial_deposit ){
	_accountIndex++;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	//std::cout << timestamp!!!
	std::cout << "account:" << _nbAccounts <<";"
			<< "total:" << _totalAmount << ";"
			<< "deposits:" << _totalNbDeposits << ";"
			<< "withdrawals:" << _totalNbWithdrawals << ";";
}
