#pragma once
#include<bits\stdc++.h>
using namespace std;

class Investment{
    string stockName;
    int quantity;
    double pricePerUnit;
    public:
    Investment(string stockName,int qty,int price);
    void display() const;
    double totalValue() const;
    string getStockName() const;
};