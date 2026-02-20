#include "Investment.h"
#include <stdexcept>
using namespace std;
Investment::Investment(string stockName,int qty,int price):
stockName(stockName),quantity(qty),pricePerUnit(price){};

double Investment::totalValue() const {
    return quantity * pricePerUnit;
}

string Investment::getStockName() const {
    return stockName;
}

void Investment::display() const {
    cout << "Stock Name: " << stockName << ", Quantity: " << quantity << ", Price per Unit: " << pricePerUnit << endl;
}