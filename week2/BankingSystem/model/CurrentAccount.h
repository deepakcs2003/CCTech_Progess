#pragma once
#include <bits\stdc++.h>
#include "Account.h"
using namespace std;
class CurrentAccount:public Account{
    private:
    double overdraftLimit;
    public:
    CurrentAccount(string accNo,string name,double bal,double overdraft);
    double calculateInterest() const override;
    void withdraw(double amount) override;
    unique_ptr<Account> clone() const override;
 };