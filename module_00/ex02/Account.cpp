#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int	Account::getNbAccounts( void ) {
    return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ) {
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    this->_amount = initial_deposit;
    this->_totalAmount += initial_deposit;
    std::cout << "amount:" << this->_amount;
    std::cout << ";created" << std::endl;
    return ;
}

Account::Account( void ) {
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    return ;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
    return ;
}

void	Account::makeDeposit( int deposit ) {
    int p_amount = this->_amount;

    this->_totalNbDeposits++;
    this->_nbDeposits++;
    this->_amount += deposit;
    this->_totalAmount += deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << p_amount;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
    int p_amount = this->_amount;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << p_amount;
    std::cout << ";withdrawal:";

    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_totalNbWithdrawals++;
    this->_nbWithdrawals++;
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;

    std::cout << withdrawal;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const {
    return (this->_amount);
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::cout << "[19920104_091532] ";
}

