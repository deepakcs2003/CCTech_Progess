#pragma once
#include<bits\stdc++.h>
#include "Account.h"
using namespace std;
class Portfolio{
    unordered_map<string,unique_ptr<Account>> accounts;
    public:
    void CreateCurrentAccount(string accNo,string name,double bal,double overdraft);
    void CreateFixedAccount(string accNo,string name,double bal,double rate,int lock);
    void CreateSavingAccount(string accNo,string name,double bal,double rate,double minBal);
    Account* getAccount(const string& acc);
    void transferMoney(const string &from,const string &to,double amount);
};