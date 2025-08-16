#include <iostream>

using namespace std;

int main () {
    int m, num = 1;
    cout << "Enter the size of the triangle: ";
    cin >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (char)(num+64) << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
