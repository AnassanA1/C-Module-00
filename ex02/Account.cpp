/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:06:45 by azghibat          #+#    #+#             */
/*   Updated: 2025/10/20 11:06:31 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = _nbAccounts;
    
    _nbAccounts++;
    _totalAmount += initial_deposit;
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::cout << "[19920104_091532] ";
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount 
              << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
              << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) 
{
    int p_amount = this->_amount;
    
    this->_amount += deposit;
    this->_nbDeposits++;
    
    _totalAmount += deposit;
    _totalNbDeposits++;
    
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
              << ";p_amount:" << p_amount 
              << ";deposit:" << deposit 
              << ";amount:" << this->_amount 
              << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) 
{
    int p_amount = this->_amount;
    
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount;
    
    if (this->_amount < withdrawal) 
	{
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
	
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    
    std::cout << ";withdrawal:" << withdrawal 
              << ";amount:" << this->_amount 
              << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    
    return true;
}

int Account::checkAmount(void) const 
{
    return this->_amount;
}

int Account::getNbAccounts(void) 
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void) 
{
    return (_totalAmount);
}

int Account::getNbDeposits(void) 
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) 
{
    return (_totalNbWithdrawals);
}