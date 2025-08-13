#include<iostream>
using namespace std;
int main() {
    float principal = 1000.0; // initial amount
    float rate = 5.0; // interest rate in percentage
    int time = 2; // time in years
    float interest = (principal * rate * time) / 100; // calculate simple interest
    cout << "Simple Interest: " << interest << endl;
    float totalAmount = principal + interest; // calculate total amount after interest
    cout << "Total Amount after " << time << " years: " << totalAmount << endl;
    return 0; // end of the program
}