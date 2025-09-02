#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>



using namespace std;

int main() {
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    s.insert(10);


    cout<< *(s.lower_bound(4));
    cout << endl;
    cout << *(s.upper_bound(4));
    cout << endl;


    for (auto val: s){
        cout << val << " ";
    }
    return 0;

}