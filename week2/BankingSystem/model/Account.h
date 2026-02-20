#pragma once
#include<bits/stdc++.h>
#include "Transaction.h"
#include "Investment.h"

class Account{
    protected:
    string accountNumber;
    string holderName;
    double balance;
    vector<Transaction> transactions;
    vector<Investment> investments;
    public:
    Account(string accNo,string name,double bal);
    virtual ~Account();

    void deposite(double amount);
    virtual void  withdraw(double amount)=0;
    virtual void  display() const;
    virtual double calculateInterest() const=0;
    virtual unique_ptr<Account> clone() const=0;
    void invest(string stock,int qt,double price);
    double netWorth() const;
    double getBalance() const;
    string getAccountNumber() const;
};