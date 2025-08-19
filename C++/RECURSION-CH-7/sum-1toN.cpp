#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 numbers is 0
    }
    return n + sum(n - 1); 
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = sum(n);
    cout << "Sum from 1 to " << n << " is: " << result << endl;
    return 0;
}
