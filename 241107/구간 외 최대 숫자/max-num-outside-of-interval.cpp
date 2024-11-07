#include <iostream>
#include <cmath>
using namespace std;

int n, q;
int L[100001], R[100001];
int arr[100001];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    L[0] = arr[0];
    R[n-1] = arr[n-1];
    for(int i=1; i<n-1; i++){
        L[i] = max(L[i-1], arr[i]);
        R[n-i-1] = max(R[n-i], arr[n-i-1]);
    }
    int a, b;
    for(int i=0; i<q; i++){
        cin >> a>> b;
        a--; b--;
        cout << max(L[a-1], R[b+1]) << '\n';
    }


    return 0;
}