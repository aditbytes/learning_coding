#include<iostream>
using namespace std;
int main () {

        int x = 0;
        cout << "Enter a number: ";
        cin >> x;
        int y = 0;
        cout << "Enter another number: ";
        cin >> y;
        int modulus = x % y;
        cout << "The modulus of " << x << " and " << y << " is " << modulus << endl;
        return 0;

}
