#include <iostream>
#include <cmath>
using namespace std;

typedef long long int ll;

ll n, k,t;
ll arr[501][501];

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> k;

    for(int i=0; i<=n; i++){
        arr[i][0] = arr[0][i] = 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> t;
            arr[i][j] = arr[i-1][j] + arr[i][j-1] + t - arr[i-1][j-1];
        }
    }

    ll _max = -1;
    for(int i=k; i<=n;i++){
        for(int j = k; j<=n; j++){
            _max = max(_max, arr[i][j] + arr[i-k][j-k] - arr[i-k][j] - arr[i][j-k]);
        }
    }

    cout << _max;
    return 0;
}