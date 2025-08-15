#include <iostream>


using namespace std;


int main () {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int b;
    cout << "Enter another number: ";
    cin >> b;
    int c;
    cout << "Enter one more number: ";
    cin >> c;
    if (a > b && a > c) {
        cout << "The largest number is: " << a << endl;
    } else if (b > a && b > c) {
        cout << "The largest number is: " << b << endl;
    } else if (c > a && c > b) {
        cout << "The largest number is: " << c << endl;
    } else {
        cout << "There is no single largest number." << endl;
    }
}