#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Account {
public:
    string accountNumber;
    string accountHolderName;
    double balance;

    //constructor
    Account(string accNum, string accHolderName, double bal) : accountNumber(accNum), accountHolderName(accHolderName), balance(bal) {}

    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }
};

class Bank {
private:
    vector<Account> accounts;
    string fileName = "accounts.txt";

public:
    void createAccount() {
        string accNum, accHolderName;
        double initialDeposit;
        cout << "Enter Account Number: ";
        cin >> accNum;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, accHolderName);
        cout << "Enter Initial Deposit: ";
        cin >> initialDeposit;
        Account newAccount(accNum, accHolderName, initialDeposit);
        accounts.push_back(newAccount);
        saveAccounts();
        cout << "Account created successfully!" << endl;
    }

    void getAccountDetails() {
        string accNum;
        cout << "Enter Account Number: ";
        cin >> accNum;
        for (auto &account : accounts) {
            if (account.accountNumber == accNum) {
                account.displayAccountDetails();
                return;
            }
        }
        cout << "Account not found!" << endl;
    }

    void updateAccount() {
        string accNum;
        cout << "Enter Account Number: ";
        cin >> accNum;
        cin.ignore();
        for (auto &account : accounts) {
            if (account.accountNumber == accNum) {
                cout << "Enter New Account Holder Name: ";
                getline(cin, account.accountHolderName);
                saveAccounts();
                cout << "Account updated successfully!" << endl;
                return;
            }
        }
        cout << "Account not found!" << endl;
    }

    void deleteAccount() {
        string accNum;
        cout << "Enter Account Number: ";
        cin >> accNum;
        for (auto it = accounts.begin(); it != accounts.end(); ++it) {
            if (it->accountNumber == accNum) {
                accounts.erase(it);
                saveAccounts();
                cout << "Account deleted successfully!" << endl;
                return;
            }
        }
        cout << "Account not found!" << endl;
    }

    void transaction() {
        string accNum;
        int transType;
        double amount;
        cout << "Enter Account Number: ";
        cin >> accNum;
        for (auto &account : accounts) {
            if (account.accountNumber == accNum) {
                cout << "Enter Transaction Type (1 for Deposit, 2 for Withdraw): ";
                cin >> transType;
                cout << "Enter Amount: ";
                cin >> amount;
                if (transType == 1) {
                    account.deposit(amount);
                }
                else if (transType == 2) {
                    account.withdraw(amount);
                }
                else {
                    cout << "Invalid transaction type!" << endl;
                }
                saveAccounts();
                return;
            }
        }
        cout << "Account not found!" << endl;
    }

    void loadAccounts() {
        ifstream file(fileName,ios::app);
        if (file.is_open()) {
            string accNum, accHolderName;
            double balance;
            while (file >> accNum >> accHolderName >> balance) {
                Account newAccount(accNum, accHolderName, balance);
                accounts.push_back(newAccount);
            }
            file.close();
        }
    }

    void saveAccounts() {
        ofstream file(fileName,ios::app);
        if (file.is_open()) {
            for (auto &account : accounts) {
                file << account.accountNumber << " " << account.accountHolderName << " " << account.balance << endl;
            }
            file.close();
        }
    }
};

int main() {
    Bank bank;
    bank.loadAccounts();
    char choice;
    while (true) {
        cout << "\nBanking System Menu:" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Get Account Details" << endl;
        cout << "3. Update Account" << endl;
        cout << "4. Delete Account" << endl;
        cout << "5. Transaction" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case '1':
            bank.createAccount();
            break;
        case '2':
            bank.getAccountDetails();
            break;
        case '3':
            bank.updateAccount();
            break;
        case '4':
            bank.deleteAccount();
            break;
        case '5':
            bank.transaction();
            break;
        case '6':
            exit(0);
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}