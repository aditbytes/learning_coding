#include <iostream>

using namespace std;

int main () {
    int n;
    cout << "enter a number: ";
    cin >> n;
    int m;
    cout << "enter another number: ";
    cin >> m;
    char op;
    cout << "enter an operator (+, -, *, /): ";
    cin >> op;
    if (op == '+') {
        cout << "Result: " << n + m << endl;
    } else if (op == '-') {
        cout << "Result: " << n - m << endl;
    } else if (op == '*') {
        cout << "Result: " << n * m << endl;
    } else if (op == '/') {
        if (m != 0) {
            cout << "Result: " << n / m << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Error: Invalid operator!" << endl;
    }   
}