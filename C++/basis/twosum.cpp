#include<iostream>
using namespace std;
int main () {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int y;
    cout << "Enter another number: ";
    cin >> y;
    int sum = x + y;
    cout << "The sum of " << x << " and " << y << " is: " << sum << endl;
    return 0;
}