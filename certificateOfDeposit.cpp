#include "certificateOfDeposit.h"

const double certificateOfDeposit::INTEREST_RATE = 0.05;
//const double certificateOfDeposit::NUMBER_OF_MATURITY_MONTHS = 6;

certificateOfDeposit::certificateOfDeposit(std::string name, int accountNumber, double balance)
        : bankAccount(name, accountNumber, balance) {
    this->interestRate      = INTEREST_RATE;
    this->maturityMonths    = 0;
    this->cdMonth           = 0;
}

certificateOfDeposit::certificateOfDeposit(std::string name, int accountNumber, double balance, double interestRate,
                                           int maturityMonths) : bankAccount(name, accountNumber, balance) {
    this->interestRate = interestRate;
    this->maturityMonths = maturityMonths;
    this->cdMonth = 0;
}

//Getters
double certificateOfDeposit::getInterestRate() {
    return this->interestRate;
}

double certificateOfDeposit::getCurrentCDMonth() {
    return this->cdMonth;
}

double certificateOfDeposit::getMaturityMonths() {
    return this->maturityMonths;
}

//Setters
void certificateOfDeposit::setInterestRate(double rate) {
    this->interestRate = rate;
}

void certificateOfDeposit::setCurrentCDMonth(int month) {
    this->cdMonth = month;
}

void certificateOfDeposit::setMaturityMonths(int month) {
    this->maturityMonths = month;
}

//Functions

void certificateOfDeposit::postInterest() {
    this->balance = this->balance + this->balance * this->interestRate;
}

void certificateOfDeposit::withdraw() {
    //No withdrawal until maturity.
}

void certificateOfDeposit::withdraw(double amount) {
    if(this->cdMonth > this->maturityMonths){
        this->balance = 0;
    }else{
        std::cout<<"CD has not been matured. No withdrawl."<<std::endl;
    }
}

void certificateOfDeposit::createMonthlyStatement() {
    this->postInterest();
    this->cdMonth++;
}

void certificateOfDeposit::print() {
    std::cout<<std::fixed<<std::showpoint<<std::setprecision(2);
    std::cout<<"Certificate of Deposit: "<<this->getName()<<"\t ACCT#"<<this->getAccountNumber()<<"\tBalance: $"<<this->getBalance();
}






























