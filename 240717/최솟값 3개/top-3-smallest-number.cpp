#include <iostream>
#include <queue>
using namespace std;

typedef long long int ll;

int n;
ll a;
priority_queue<ll> pq;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    ll mul = 1;
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