#include "Account.h"
#include <bits\stdc++.h>
#include "Transaction.h"
#include "Investment.h"
using namespace std;

Account::Account(string accNo,string name,double bal):
accountNumber(accNo),holderName(name),balance(bal){
    if(bal<0){
        throw invalid_argument("Negative Balance not Allowed");
    }
};
Account::~Account(){};

void Account::deposite(double amount){
    if(amount<0){
        throw invalid_argument("Invalid deposit amount");
    }
    balance+=amount;
    // Transaction t("Deposit",amount);
    // transactions.push_back(t);
    transactions.emplace_back("Deposit",amount);
}

void Account::invest(string stock,int qt,double price){
    double total=qt*price;

    if(total>balance){
        throw invalid_argument("Insufficient balance");
    }
    balance-=total;
    investments.emplace_back(stock,qt,price);
    transactions.emplace_back("investment",total);
};

double Account::netWorth() const{
    int total=balance;
    for(const auto& inv:investments){
        total+=inv.totalValue();
    }
    return total;
};

double  Account::getBalance() const{
    return balance;
};

string Account::getAccountNumber() const{
    return accountNumber;
};



void Account::display() const
{
    cout << "----- Account Information -----" << endl;
    cout << "Account Number : " << accountNumber << endl;
    cout << "Holder Name    : " << holderName << endl;
    cout << "Balance        : " << balance << endl;
    cout << "\n--- Transactions ---" << endl;
    if (transactions.empty())
    {
        cout << "No transactions available." << endl;
    }
    else
    {
        for (const auto& t : transactions)
        {
            t.display();   // assuming Transaction class has display()
        }
    }

    cout << "\n--- Investments ---" << endl;
    if (investments.empty())
    {
        cout << "No investments available." << endl;
    }
    else
    {
        for (const auto& inv : investments)
        {
            inv.display();   // assuming Investment class has display()
        }
    }

    cout << "--------------------------------" << endl;
}







