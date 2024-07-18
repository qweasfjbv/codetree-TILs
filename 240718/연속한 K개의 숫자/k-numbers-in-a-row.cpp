#include <iostream>
#include <cmath>
using namespace std;

int n, k, b, t;
int arr[100001];
int sum[100001];

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> k >> b;

    for(int i=0; i<=n; i++){
        arr[t] = 0;
    }
    for(int i=0; i<b; i++){
        cin >> t;
        arr[t] = 1;
    }

    sum[0] = 0;
    for(int i=1; i<=n; i++){
        sum[i] = sum[i-1] + arr[i];
    }

    int _min = 100001;
    for(int i=k; i<=n; i++){
        _min = min(_min, sum[i]-sum[i-k]);
    }

    cout << _min;


    return 0;
}