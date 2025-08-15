#include <iostream>

using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 3 == 0 or n % 5 == 0) {
        cout << "The number is divisible by 3 or 5." << endl;
    }
    else {
        cout << "The number is not divisible by 3 or 5." << endl;
    }   
}