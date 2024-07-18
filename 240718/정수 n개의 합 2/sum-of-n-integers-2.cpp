#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, k, t;
int arr[100001];

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> k;
    arr[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> t;
        arr[i] = arr[i-1]+t;
    }

    int _max = -1;
    for(int i=k; i<=n; i++){
        _max = max(_max, arr[i] - arr[i-k]);
    }

    cout << _max;

    return 0;
}