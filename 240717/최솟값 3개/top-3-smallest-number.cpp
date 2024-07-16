#include <iostream>
#include <queue>
using namespace std;

int n, a;
priority_queue<int> pq;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    int mul = 1;
    for(int i=0; i<n; i++){
        cin >> a;
        if(i==0 || i ==1){
            mul *= a;
            pq.push(a); cout << -1 << '\n';
            continue;
        }
        else if(i == 2){
            mul *= a;
            pq.push(a);
            cout << mul << '\n';
            continue;
        }

        if(pq.top() > a){
            mul /= pq.top();
            mul *= a;
            pq.pop();
            pq.push(a);
        }

        cout << mul << '\n';
    }



    return 0;
}