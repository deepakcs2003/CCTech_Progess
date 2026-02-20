#include "Transaction.h"
using namespace std;
int Transaction::idCounter=0;
Transaction::Transaction(string t,double a):
type(t),amount(a),timestamp(chrono::system_clock::now()){
    idCounter++;
    transactionId="TXT"+to_string(idCounter);
};

void Transaction::display() const{
    time_t timeNow=chrono::system_clock::to_time_t(timestamp);
     cout << "Transaction ID : " << transactionId << endl;
    cout << "Type           : " << type << endl;
    cout << "Amount         : " << amount << endl;
    cout << "Time           : "
         << ctime(&timeNow);
    cout << "--------------------------" << endl;
};

double Transaction::getAmount() const {
    return amount;
}
string Transaction::getTransactionId() const {
    return transactionId;
}

