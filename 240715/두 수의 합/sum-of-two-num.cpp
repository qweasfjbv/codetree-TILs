#include <iostream>
#include <unordered_map>
using namespace std;

typedef long long int ll;

int n;
ll k;
unordered_map<ll, int> _map;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);


    ll tmp;
    ll sum = 0;
    // Input
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> tmp;
        ll dif = k-tmp;
        
        sum += _map[dif];

        _map[tmp]++;
    }

    


    // Output
    cout << sum;


    return 0;
}