#include <iostream>

using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 99 and n < 1000) {
        cout << "The number is a three-digit number." << endl;
    } else if (n > 9 and n < 100) {
        cout << "The number is a two-digit number." << endl;
    } else if (n > 0 and n < 10) {
        cout << "The number is a one-digit number." << endl;
    } else {
        cout << "The number is not a one, two, or three-digit number." << endl;
    }
}