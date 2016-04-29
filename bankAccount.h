#ifndef BANK_ACCOUNT_BANKACCOUNT_H
#define BANK_ACCOUNT_BANKACCOUNT_H

#include <string>
#include <iostream>
#include <iomanip>

class bankAccount {

protected:
    int accountNumber;
    std::string name;
    double balance;

public:
    bankAccount(std::string name = "", int accountNumber = 0, double balance = 0);

    //Getters
    int getAccountNumber();
    double getBalance();
    std::string getName();

    //Setters
    void setName(std::string name);

    //Functions
    virtual void withdraw(double amount);
    void deposit(double amount);
    virtual void createMonthlyStatement() = 0;
    virtual void print();

};


#endif //BANK_ACCOUNT_BANKACCOUNT_H
