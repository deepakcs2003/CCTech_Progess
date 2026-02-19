#pragma once
#include<bits\stdc++.h>
using namespace std;
class Transaction{
    private:
    string transactionId;
    string type;
    double ammount;
    chrono::time_point<chrono::system_clock> timestamp;
    public:
    void display() const;
    double getAmount() const;
};