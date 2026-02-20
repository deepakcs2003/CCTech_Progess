#include "BankingController.h"
#include <iostream>

using namespace std;

void BankingController::start() {

    int choice;

    do {
        cout << "\n===== Banking Menu =====\n";
        cout << "1. Create Current Account\n";
        cout << "2. Create Fixed Account\n";
        cout << "3. Create Saving Account\n";
        cout << "4. Transfer Money\n";
        cout << "5. Perform Activity in Bank\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            string accNo, name;
            double bal, overdraft;

            cout << "Enter account number, name, balance and overdraft limit: ";
            cin >> accNo >> name >> bal >> overdraft;

            portfolio.CreateCurrentAccount(accNo, name, bal, overdraft);
        }

        else if (choice == 2) {

            string accNo, name;
            double bal, rate;
            int lock;

            cout << "Enter account number, name, balance, interest rate and lock period: ";
            cin >> accNo >> name >> bal >> rate >> lock;

            portfolio.CreateFixedAccount(accNo, name, bal, rate, lock);
        }

        else if (choice == 3) {

            string accNo, name;
            double bal, rate;
            double minBal;
            cout << "Enter account number, name, balance, interest rate and minimum balance: ";
            cin >> accNo >> name >> bal >> rate >> minBal;

            portfolio.CreateSavingAccount(accNo, name, bal, rate, minBal);
        }

        else if (choice == 4) {

            string fromAcc, toAcc;
            double amount;

            cout << "Enter source account number, destination account number and amount: ";
            cin >> fromAcc >> toAcc >> amount;

            try {
                portfolio.transferMoney(fromAcc, toAcc, amount);
                cout << "Transfer successful!\n";
            }
            catch (const exception& e) {
                cout << "Error: " << e.what() << "\n";
            }
        }

        else if (choice == 5) {

            string accNo;
            cout << "Enter account number to perform activities: ";
            cin >> accNo;

            Account* acc = portfolio.getAccount(accNo);

            if (acc == nullptr) {
                cout << "Account not found!\n";
                continue;   // return to main menu safely
            }

            int activityChoice;

            do {
                cout << "\n--- Account Menu ---\n";
                cout << "11. Display Account Details\n";
                cout << "12. Deposit Money\n";
                cout << "13. Withdraw Money\n";
                cout << "14. Calculate Interest\n";
                cout << "15. Invest in Stock\n";
                cout << "16. Check Net Worth\n";
                cout << "17. Back to Main Menu\n";
                cout << "Enter your choice: ";
                cin >> activityChoice;

                try {
                    switch (activityChoice) {

                        case 11:
                            acc->display();
                            break;

                        case 12: {
                            double amount;
                            cout << "Enter amount to deposit: ";
                            cin >> amount;
                            acc->deposite(amount);
                            cout << "Deposit successful!\n";
                            break;
                        }

                        case 13: {
                            double withdrawAmount;
                            cout << "Enter amount to withdraw: ";
                            cin >> withdrawAmount;
                            acc->withdraw(withdrawAmount);
                            cout << "Withdrawal successful!\n";
                            break;
                        }

                        case 14:
                            cout << "Interest: "
                                 << acc->calculateInterest() << "\n";
                            break;

                        case 15: {
                            string stock;
                            int qt;
                            double price;

                            cout << "Enter stock name, quantity and price: ";
                            cin >> stock >> qt >> price;

                            acc->invest(stock, qt, price);
                            cout << "Investment successful!\n";
                            break;
                        }

                        case 16:
                            cout << "Net Worth: "
                                 << acc->netWorth() << "\n";
                            break;

                        case 17:
                            cout << "Returning to Main Menu...\n";
                            break;

                        default:
                            cout << "Invalid choice!\n";
                    }
                }
                catch (const exception& e) {
                    cout << "Error: " << e.what() << "\n";
                }

            } while (activityChoice != 17);
        }

    } while (choice != 6);

    cout << "Exiting Banking System...\n";
}