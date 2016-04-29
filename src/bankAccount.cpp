#include "bankAccount.h"


//Constructor
bankAccount::bankAccount(std::string name, int accountNumber, double balance) {
    this->name              = name;
    this->accountNumber     = accountNumber;
    this->balance           = balance;
}

//Getters
int bankAccount::getAccountNumber() {
    return this->accountNumber;
}

double bankAccount::getBalance() {
    return this->balance;
}

std::string bankAccount::getName() {
    return this->name;
}

//Setters
void bankAccount::setName(std::string name) {
    this->name = name;
}

//Functions, some act and setters.

void bankAccount::withdraw(double amount) {
    this->balance = this->balance - amount;
}

void bankAccount::deposit(double amount) {
    this->balance = this->balance + amount;
}

void bankAccount::print() {
    std::cout<<std::fixed<<std::showpoint<<std::setprecision(2);
    std::cout<<this->name<<this->accountNumber<<" balance : $"<<this->balance;
}

















