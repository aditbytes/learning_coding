#include <iostream>
using namespace std;

void print(int n) {
    if (n < 1) return;
    cout << n << endl;
    print(n - 1); // Recursive call to print the next number
}

int main () {
    print(3); // Call the print function to start printing from 3 to 1
    return 0;
}/*
    print N to 1 using recursion
    print(3)
    3
    print(2)
    2
    print(1)
    1
    print(0)
    return
*/
// This program prints numbers from N to 1 using recursion.
// The function `print` takes an integer `n` and prints it, then calls itself with `n-1` until `n` is less than 1.
// The main function initiates the process by calling `print(3)`.