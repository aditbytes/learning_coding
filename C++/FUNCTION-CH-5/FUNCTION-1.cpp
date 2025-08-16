#include<iostream>

using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
    cout << "Welcome to C++ programming!" << endl;
    cout << "This is a simple program to demonstrate function usage." << endl;
} 
void usa (){
    cout << "USA" << endl;
    cout << "United States of America" << endl;
    cout << "Capital: Washington, D.C." << endl;
}  
int main() {
    greet();
    usa();  // Call the greet function to display messages
    return 0;
}
