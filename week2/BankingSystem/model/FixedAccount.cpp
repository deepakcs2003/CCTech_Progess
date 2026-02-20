#include "FixedAccount.h"
#include <stdexcept>



FixedAccount::FixedAccount(string accNo,string name,double bal,double rate,int lock):
Account(accNo,name,bal),interestRate(rate),lockInPeriod(lock)
{};

void FixedAccount::withdraw(double) {
    throw std::runtime_error("Withdrawal not allowed during lock-in");
}

double FixedAccount::calculateInterest() const {
    return balance * interestRate / 100;
}

std::unique_ptr<Account> FixedAccount::clone() const {
    return std::make_unique<FixedAccount>(*this);
}