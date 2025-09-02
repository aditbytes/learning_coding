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
    priority_queue<int> q;
    
    q.push(5);
    q.push(10);
    q.push(4);
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;

}