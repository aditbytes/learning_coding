#include <iostream>
#include <sstream>
#include <cassert>

// The function to be tested, modified to be testable
void greet(int times) {
    if (times <= 0) {
        return; // Base case: stop recursion when times is 0 or less
    }
    std::cout << "Hello, World!" << std::endl;
    greet(times - 1); // Recursive call with a decremented counter
}

// A simple test function
void test_greet_prints_three_times() {
    // Redirect cout to a stringstream to capture output
    std::streambuf* old_cout_streambuf = std::cout.rdbuf();
    std::ostringstream oss;
    std::cout.rdbuf(oss.rdbuf());

    // Call the function
    greet(3);

    // Restore original cout
    std::cout.rdbuf(old_cout_streambuf);

    // Assert the expected output
    std::string expected_output = "Hello, World!\nHello, World!\nHello, World!\n";
    assert(oss.str() == expected_output);
    
    std::cout << "Test passed: greet(3) printed \"Hello, World!\" three times." << std::endl;
}

int main() {
    // Run the test
    test_greet_prints_three_times();
    return 0;
}
