#include <iostream>

using namespace std;

int main() {
    int arr[5]; // Declare an array of size 5
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i]; // Input elements into the array
    }

    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl; // Print each element
    }

    return 0;


}