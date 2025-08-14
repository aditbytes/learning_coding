#include <iostream>

using namespace std;

int main () {
    int buyingPrice, sellingPrice;
    cout << "Enter the buying price: ";
    cin >> buyingPrice;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;
    if (buyingPrice < sellingPrice) {
        cout << "Profit: " << sellingPrice - buyingPrice << endl;
    } else if (buyingPrice > sellingPrice) {
        cout << "Loss: " << buyingPrice - sellingPrice << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }
}