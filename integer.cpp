// Created By: Beni
// Date: March 23, 2025
// Check if a number is positive or negative

#include <iostream>
using namespace std;

int main() {
    cout << "I can tell you if your number is positive or negative" << endl;

    // Gets the users number
    float number;
    cout << "What is your number?: ";
    cin >> number;

    // If you have a positive number
    if (number > 0) {
        cout << number << " is a positive number" << endl;
    }
    // If you have a negative number
    else if (number < 0) {
        cout << number << " is a negative number" << endl;
    }
    // If number isn't positive or negative
    else {
        cout << "You aren't slick buddy, your number is 0" << endl;
    }

    return 0;
}