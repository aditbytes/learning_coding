#include <iostream>
#include <cmath>
using namespace std;

int fact(int a, int b) {
    if (b == 0 ) {
        return 1; 
    }
    return a * fact(a, b - 1); 
}

int main () {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int b;
    cout << "Enter a number: ";
    cin >> b;
    int result = fact(a, b); // Calculate n^n
    cout << a << " to the power of " << b << " is: " << result << endl;
    return 0;
}
