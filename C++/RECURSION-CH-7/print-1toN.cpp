#include <iostream>
using namespace std;

void print(int n , int limit) {
    if (n == limit ) return;
    cout << n << endl;
    print(n + 1, limit); 
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    print(n, limit); 
    return 0;
}
