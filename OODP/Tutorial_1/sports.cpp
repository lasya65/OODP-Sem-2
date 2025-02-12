//This is a program to suggest the sporting activities to the guests based on the temperature that day.

#include <iostream>
using namespace std;

int main() {
    int temp;

    // Taking user input
    cout << "Enter the temperature: ";
    cin >> temp;

    // Determining the activity
    if (temp >= 80) {
        cout << "Suggested activity: Swimming" << endl;
    } 
    else if (temp >= 60 && temp < 80) {
        cout << "Suggested activity: Tennis" << endl;
    } 
    else if (temp >= 40 && temp < 60) {
        cout << "Suggested activity: Golf" << endl;
    } 
    else {
        cout << "Suggested activity: Skiing" << endl;
    }

    return 0;
}
