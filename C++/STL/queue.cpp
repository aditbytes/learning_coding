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
    queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;

}