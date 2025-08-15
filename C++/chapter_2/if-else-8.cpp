#include <iostream>

using namespace std;


int main () {
    int n, m, o;
    cout << "Enter a numbers: ";
    cin >> n;
    cout << "Enter another number: ";
    cin >> m;
    cout << "Enter one more number: ";
    cin >> o; 
    if (n + m > o && n + o > m && m + o > n) {
        cout << "The numbers can form a triangle." << endl;
    } else {
        cout << "The numbers cannot form a triangle." << endl;
    }   
}