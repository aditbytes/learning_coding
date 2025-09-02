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
    map<string, int > m;
    m["tv"]= 100;
    m["laptop"] = 100;
    m["mobile"] = 150;
    
    m.erase("tv");

    for (auto p:m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << m.count("tv") << endl;

    if (m.find("tv") != m.end()) {
        cout << "tv found" << endl;
    } else {
        cout << "tv not found" << endl;
    }

    return 0;

}