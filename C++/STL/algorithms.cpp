#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm> // Required for std::sort



using namespace std;

int main() {
    int arr[5] = {5, 1, 2, 4, 3};
    sort(arr, arr + 5);
    for (auto val: arr) {
        cout << arr[5] << " ";
    }
    cout << endl;

    return 0;

}