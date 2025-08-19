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
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = fact(n, n); // Calculate n^n
    cout << n << " to the power of " << n << " is: " << result << endl;
    return 0;
}
