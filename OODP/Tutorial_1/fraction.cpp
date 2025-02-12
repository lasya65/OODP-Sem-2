#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    char slash; // To read '/' character

    // Taking first fraction input
    cout << "Enter first fraction (a/b): ";
    cin >> a >> slash >> b;

    // Taking second fraction input
    cout << "Enter second fraction (c/d): ";
    cin >> c >> slash >> d;

    // Calculating the product
    int numerator = a * c;
    int denominator = b * d;

    // Displaying the result
    cout << "Product = " << numerator << "/" << denominator << endl;

    return 0;
}
