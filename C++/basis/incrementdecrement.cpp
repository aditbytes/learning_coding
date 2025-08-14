#include<iostream>
using namespace std;
// int main () {
//     int x = 5;
//     cout << x << endl; // output the value of x
//     x++; // increment x by 1
//     cout << x << endl; // output the incremented value of x
//     x--; // decrement x by 1
//     cout << x << endl; // output the decremented value of x
//     return 0; // end of the program
// }
int main() {
    int x = 4;
    cout << x << endl; // output the value of x
    cout << ++x << endl; // output the value of x after pre-increment
    cout << x++ << endl; // output the value of x after post-increment  
    cout << x << endl; // output the value of x after post-increment
    cout << --x << endl; // output the value of x after pre-decrement
    cout << x-- << endl; // output the value of x after post-decrement
    cout << x << endl; // output the value of x after post-decrement
    return 0; // end of the program  
}