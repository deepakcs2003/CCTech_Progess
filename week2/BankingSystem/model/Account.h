#pragma once
#include<bits./stdc++.h>
using namespace std;
class Transaction;
class Account{
    private:
    string accountNumber;
    string holderName;
    double balance;
    vector<Transaction> transactions;
    public:
    void deposite(double amount);
    virtual void  withdraw(double amount);
    virtual void  display() const;


};