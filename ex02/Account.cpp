#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void){
	_amount = 0;
}

Account::Account( int initial_deposit ){
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _nbAccounts << ";"
			<< "amount:" << initial_deposit << ";"
			<< "created" << std::endl;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
}

void	Account::_displayTimestamp(void){
	time_t now = time(0);
	struct tm tstruct;
	char	buf[16];
	tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);

	std::cout << "[" << buf << "]";
}

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << " account:" << getNbAccounts() <<";"
			<< "total:" << getTotalAmount() << ";"
			<< "deposits:" << getNbDeposits() << ";"
			<< "withdrawals:" << getNbWithdrawals() << ";"
			<< std::endl;
}

void	Account::makeDeposit( int deposit ){
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";"
			<< "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";"
			<< "nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";"
			<< "withdrawal:refused"
			<< std::endl;
		return false;
	}
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";"
			<< "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	std::cout << "amount:" << _amount << ";"
			<< "nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	return true;
}

int		Account::checkAmount( void ) const{
	return _amount;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "deposits:" << _nbDeposits << ";"
			<< "withdrawal:" << _nbWithdrawals << ";"
			<< std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "closed" << std::endl;
	return ;
}
