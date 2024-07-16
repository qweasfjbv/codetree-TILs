#include <iostream>
#include <queue>
using namespace std;

int n, a;
priority_queue<int> pq;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);


    cin >>n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a>0) pq.push(a);
        else {
            if(pq.empty()) cout << 0 << "\n";
            else{
            cout << pq.top() << '\n';
            pq.pop();
            }
        }
    }

    return 0;
}