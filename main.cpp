#include <iostream>
#include "src/certificateOfDeposit.h"
int main() {
    certificateOfDeposit account1("Hamid", 51001, 1800, 0.075, 18);
    account1.createMonthlyStatement();
    account1.print();
    std::cout<<std::endl;
    system("PAUSE");
    return 0;
}