#include <iostream>
#include <iomanip> // Required for manipulators
using namespace std;

int main() {
    double num1 = 45.6789;
    double num2 = 0.00034567;
    int num3 = 255;
    double num4 = 987.654321;
    double num5 = -123.456;

    // (a) Print 45.6789 in a field width of 10, right-justified, with 3 decimal places
    cout << setw(10) << fixed << setprecision(3) << num1 << endl;

    // (b) Display 0.00034567 in scientific notation with 6 decimal places
    cout << scientific << setprecision(6) << num2 << endl;

    // (c) Print 255 as a hexadecimal number in uppercase
    cout << hex << uppercase << num3 << endl;

    // (d) Print 987.654321 as a fixed-point number rounded to 4 decimal places
    cout << fixed << setprecision(4) << num4 << endl;

    // (e) Display -123.456 in exponential notation with 4 decimal places
    cout << scientific << setprecision(4) << num5 << endl;

    return 0;
}
