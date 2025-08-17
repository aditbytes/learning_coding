#include<iostream>

using namespace std;

int main () {
    int x = 2;
    int y= 5;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    x = x + y; // Step 1: Add x and y
    y = x - y; // Step 2: Subtract y from the result of Step
    x = x - y; // Step 3: Subtract y from the result of Step
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}