#include <iostream>
using namespace std;

int n, k, t;
int arr[1001];

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >>n >> k;
    arr[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> t;
        arr[i] = arr[i-1] + t;
    }

    int count = 0;

    for(int i=0; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(arr[j]-arr[i] == k) count++;
        }
    }

    cout << count;

    return 0;
}