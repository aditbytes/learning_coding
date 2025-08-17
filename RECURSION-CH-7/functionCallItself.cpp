#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
    greet(); // Recursive call to the same function
}
int main() {
    greet(); // Call the greet function to start the recursion
    return 0;
}