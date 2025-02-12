/*This is a program which continually calculates the cube of the numbers entered by the user until the user enters
a number that is divisible by both 2 and 3*/

#include <iostream>
using namespace std;

int main() {
    int num;

    while (true) {
        // Taking user input
        cout << "Enter a number: ";
        cin >> num;

        // Check if the number is divisible by both 2 and 3
        if (num % 2 == 0 && num % 3 == 0) {
            cout << "EXIT" << endl;
            break;
        }

        // Calculate and display the cube of the number
        cout << "Cube of " << num << " is: " << (num * num * num) << endl;
    }

    return 0;
}
