#include <iostream>

using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = n; i <= 1000; i += n) {
        cout << i << " ";
    }
    return 0;
}