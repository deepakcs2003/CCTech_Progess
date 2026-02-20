#include "Portfolio.h"
#include "CurrentAccount.h"
#include "FixedAccount.h"
#include "SavingAccount.h"
#include <stdexcept>

void Portfolio::CreateCurrentAccount(string accNo,string name,double bal,double overdraft) {
    accounts[accNo] = make_unique<CurrentAccount>(accNo,name,bal,overdraft);
};
void Portfolio::CreateFixedAccount(string accNo,string name,double bal,double rate,int lock) {
    accounts[accNo] = make_unique<FixedAccount>(accNo,name,bal,rate,lock);
};
void Portfolio::CreateSavingAccount(string accNo,string name,double bal,double rate,double minBal) {
    accounts[accNo] = make_unique<SavingAccount>(accNo,name,bal,rate,minBal);
};

Account* Portfolio::getAccount(const string& acc) {
    auto it = accounts.find(acc);
    if (it != accounts.end()) {
        return it->second.get();
    }
    throw std::runtime_error("Account not found");
}
void Portfolio::transferMoney(const string &from,const string &to,double amount) {
    Account* fromAcc = getAccount(from);
    Account* toAcc = getAccount(to);
    fromAcc->withdraw(amount);
    toAcc->deposite(amount);
}


