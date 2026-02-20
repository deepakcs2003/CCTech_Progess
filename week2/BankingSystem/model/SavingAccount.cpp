#include <bits\stdc++.h>
#include "SavingAccount.h"
#include "Transaction.h"
#include "Investment.h"
using namespace std;

SavingAccount::SavingAccount(string accNo,string name,double bal,double rate,double minBal):
Account(accNo,name,bal),interestRate(rate),minimumBalance(minBal){};

 double SavingAccount::calculateInterest() const{
    return balance*interestRate/100;
 };

unique_ptr<Account> SavingAccount:: clone() const{
    return make_unique<SavingAccount>(*this);
};

void SavingAccount:: withdraw(double amount){
   if (amount <= 0)
        throw std::invalid_argument("Invalid withdrawal");

    if (balance - amount < minimumBalance)
        throw std::runtime_error("Minimum balance violated");

    balance -= amount;
    transactions.emplace_back("Withdraw", amount);
};
