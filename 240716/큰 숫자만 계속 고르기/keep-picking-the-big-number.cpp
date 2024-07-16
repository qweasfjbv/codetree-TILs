#include <iostream>
#include <queue>
using namespace std;

int n, m, t;
priority_queue<int> pq;

int main() {

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> t;
        pq.push(t);
    }

    for(int i=0; i<m; i++){
        t = pq.top();
        pq.pop();
        t--;
        pq.push(t);
    }
    
    cout << pq.top();

    return 0;
}