#ifndef BANK_ACCOUNT_CERTIFICATEOFDEPOSIT_H
#define BANK_ACCOUNT_CERTIFICATEOFDEPOSIT_H

#include "bankAccount.h"


class certificateOfDeposit : public bankAccount {
private:
    static const double INTEREST_RATE; //0.05
   //static const int NUMBER_OF_MATURITY_MONTHS = 6; //6
    double interestRate;
    int maturityMonths;
    int cdMonth;
public:
    certificateOfDeposit(std::string name, int accountNumber, double balance);
    certificateOfDeposit(std::string name, int accountNumber, double balance, double interestRate, int maturityMonths);

    //Getters
    double getInterestRate();
    double getCurrentCDMonth();
    double getMaturityMonths();

    //Setters
    void setInterestRate(double rate);
    void setCurrentCDMonth(int month);
    void setMaturityMonths(int month);

    //Function
    void postInterest();
    void withdraw();
    void withdraw(double amount);
    void createMonthlyStatement();
    void print();
};


#endif //BANK_ACCOUNT_CERTIFICATEOFDEPOSIT_H
