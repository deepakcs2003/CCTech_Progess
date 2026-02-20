#pragma once
#include<bits\stdc++.h>
#include "account.h"
using namespace std;

class FixedAccount:public Account{
    double interestRate;
    int lockInPeriod;
    public:
    FixedAccount(string accNo,string name,double bal,double rate,int lock);
    void withdraw(double amount) override;
    double calculateInterest() const override;
    unique_ptr<Account> clone() const override;

};