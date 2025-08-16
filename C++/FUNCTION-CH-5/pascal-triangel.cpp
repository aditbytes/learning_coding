#include<iostream>

using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int ncr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main () {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;
    for (int i= 0; i<=n; i++) {
         for (int j = 0; j <= n-i+1; j++) {
            cout  << "  ";
        } 
        for (int j = 0; j <= i; j++) {
            cout << ncr(i, j) << "   ";
        }   
        cout << endl;
    }
    return 0;

}