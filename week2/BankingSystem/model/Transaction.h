#pragma once
#include<bits\stdc++.h>
using namespace std;
class Transaction{
    private:
    string transactionId;
    string type;
    double amount;
    chrono::time_point<chrono::system_clock> timestamp;
    static int idCounter;
    public:
    Transaction(string t,double a);
    void display() const;
    double getAmount() const;
    string getTransactionId() const;
};