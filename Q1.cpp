/*Q1: Question 1: Bank Interest Calculation
A bank calculates interest based on loan tenure:

1-5 years → 7%
6-10 years → 8.5%
More than 10 years → 10%
Consider loan amount as double and tenure as integer. Convert integer tenure to float implicitly. Use static_cast to ensure precision in interest calculation. 
Display the final interest with two decimal places.*/


#include <iostream>
#include <iomanip>

double calculateInterest(double amount, int tenure) {
    double rate;

    if (tenure <= 5) {
        rate = 7.0;
    } else if (tenure <= 10) {
        rate = 8.5;
    } else {
        rate = 10.0;
    }

    double interest = (amount * rate * static_cast<double>(tenure)) / 100.0;
    return interest;
}

int main() {
    double loanAmount;
    int tenure;

    std::cout << "Enter loan amount: ";
    std::cin >> loanAmount;
    std::cout << "Enter loan tenure (years): ";
    std::cin >> tenure;

    double interest = calculateInterest(loanAmount, tenure);
    std::cout << "Final Interest: " << std::fixed << std::setprecision(2) << interest << std::endl;

    return 0;
}
