#include <iostream>

using namespace std;

int main () {
    int lenght, width;
    cout << "Enter the length of the rectangle: ";
    cin >> lenght;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    int area = lenght * width;
    cout << "The area of the rectangle is: " << area;
    int perimeter = 2 * (lenght + width);
    cout << "\nThe perimeter of the rectangle is: " << perimeter << endl;
    if (area > perimeter) {
        cout << "Area is greater than perimeter." << endl;
    } else if (area < perimeter) {
        cout << "Perimeter is greater than area." << endl;
    } else {
        cout << "Area and perimeter are equal." << endl;
    }

}
// This program calculates the area and perimeter of a rectangle and compares them.
// It prompts the user to enter the length and width, computes the area and perimeter,
// and then checks which one is greater or if they are equal. The results are displayed accordingly.
// The program uses basic arithmetic operations and conditional statements to achieve this functionality.
// It is a simple demonstration of using if-else statements in C++ to compare two values.
// The program is written in C++14 standard and uses the iostream library for input and output operations.
// The use of 'using namespace std;' allows us to avoid prefixing standard library names with
// 'std::', making the code cleaner and easier to read. The program is structured to be straightforward,
// allowing users to easily understand how to calculate and compare the area and perimeter of a rectangle.
// The program is designed to be user-friendly, providing clear prompts and outputs.
// The code is efficient and concise, demonstrating the use of basic programming constructs in C++.
// The program can be compiled and run in any C++14 compatible environment, making it accessible for learning and practice.
// The program serves as a good exercise for beginners to understand conditional logic and arithmetic operations in C++.
// It can be extended or modified to include more features, such as input validation or handling different shapes.

// The program is a practical example of how to apply C++ concepts in real-world scenarios, such as geometry calculations.
// It can be used as a foundation for more complex programs that involve geometric computations or comparisons.
// The program is a good starting point for those learning C++ and wanting to understand how to use if-else statements effectively.         