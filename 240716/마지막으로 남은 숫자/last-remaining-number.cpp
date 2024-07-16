#include <iostream>
#include <queue>
using namespace std;

int n, a;
priority_queue<int> pq;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        pq.push(n);
    }

    int b;
    while(pq.size() >= 2){
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        if(a!= b) pq.push(a-b);
    }

    if(pq.size() == 1){
        cout << pq.top();
    }
    else cout<< -1;

    return 0;
}