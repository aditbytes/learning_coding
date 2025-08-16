#include<iostream>

using namespace std;

void sum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main () {
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    sum(a, b);  // Call the sum function to display the result
    return 0;
}