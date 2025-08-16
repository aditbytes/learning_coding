#include <iostream>

using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int m;
    cout << "Enter the 2nd number: ";
    cin >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* "; // Print a star followed by a space
        }
        cout << endl; // Move to the next line after printing one row of stars5
    }

    return 0;
}