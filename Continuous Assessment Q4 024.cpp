#include <iostream>

using namespace std;

class Product {
private:
    static double discountRate; // Static variable for the discount rate
    double basePrice;

public:
    // Constructor to initialize the base price
    Product(double price) : basePrice(price) {}

    // Static method to set the discount rate
    static void setDiscountRate(double rate) {
        discountRate = rate;
    }

    // Method to calculate the final price after applying the discount
    double calculateFinalPrice() const {
        return basePrice * (1 - discountRate);
    }

    // Method to display the product's base price and final price
    void displayPrices() const {
        cout << "Base Price: $" << basePrice << endl;
        cout << "Final Price after " << (discountRate * 100) << "% discount: $" << calculateFinalPrice() << endl;
    }
};

// Initialize the static variable
double Product::discountRate = 0.0;

int main() {
    // Set the discount rate for all products
    Product::setDiscountRate(0.15);
    
    int base1,base2;

    // Create product instances
    
    cout << "Base price of product 1: " << endl;
    cin >> base1;
    cout << "Base price of product 2: " << endl;
    cin >> base2;
    Product product1(base1);
    Product product2(base2);

    // Display prices for each product
    product1.displayPrices();
    product2.displayPrices();

    return 0;
}