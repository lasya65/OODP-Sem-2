//This is a program to multiply the two given integers.
//The program displays the product and the number of digits in the product.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, product, count = 0;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    product = num1 * num2;
    cout << "Product = " << product << endl;
    while (product != 0) {
        product /= 10;
        count++;
    }
    cout << "Number of digits in the product = " << count;
    return 0;
}