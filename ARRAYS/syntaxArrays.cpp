#include <iostream>

using namespace std;

int main() {
    int arr[5]; // Declare an array of size 5
    arr[1] = 10; // Assign value to the second element
    arr[3] = 20; // Assign value to the fourth element  
    arr[4] = 30; // Assign value to the fifth element
    arr[0] = 5;  // Assign value to the first element
    arr[2] = 40; // Assign value to the third element

    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl; // Print each element
    }

    return 0;


}