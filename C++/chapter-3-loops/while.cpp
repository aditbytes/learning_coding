#include <iostream>

using namespace std;

int main () {
    
for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
        continue; // Skip the rest of the loop when i is even
    }
    cout << i << "  "; // This will not print when i is even
}
    return 0;
}