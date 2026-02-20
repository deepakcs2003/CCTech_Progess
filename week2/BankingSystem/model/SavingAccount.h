#pragma once
#include<bits\stdc++.h>
using namespace std;
#include "Account.h"

class SavingAccount:public Account{
    private:
    double interestRate;
    double minimumBalance;
    public:
    SavingAccount(string accNo,string name,double bal,double rate,double minBal);
    double calculateInterest() const override;
    void withdraw(double amount) override;
    unique_ptr<Account> clone() const override;

};