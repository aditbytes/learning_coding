#include <iostream>

using namespace std;


int main () {
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    int reverse = 0;
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reverse = reverse * 10 + digit; // Build the reversed number
        n /= 10; // Remove the last digit
    }
    cout << "The reverse of the number is: " << reverse << endl;
    
    int sum = 0;
    sum = n + reverse; // Calculate the sum of the original and reversed number
    cout << "The sum of the original and reversed number is: " << sum << endl;


    return 0;
}
