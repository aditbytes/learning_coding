#include <iostream>
using namespace std;

int main () {
    int x = 3;
    cout << "Address of x: " << &x << endl;
    int y= 3;
    cout << "Address of y: " << &y << endl;
    cout << x<< endl;
    int *p;
    p = &x;
    cout << "Address of x: " << p << endl;
    cout << "Value of x: " << *p << endl;   
}