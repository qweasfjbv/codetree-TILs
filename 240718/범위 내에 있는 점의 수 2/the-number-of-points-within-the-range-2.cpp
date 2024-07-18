#include <iostream>
using namespace std;

int n, q, t;
int a, b;
int arr[1000002];
int sum[1000002];
int LEN = 1000002;

int main() {
    // 여기에 코드를 작성해주세요.

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >>n >> q;

    for(int i=0; i< LEN; i++) {sum[i] = 0; arr[i] = 0;}
    for(int i=0; i<n; i++){
        cin >> t;
        arr[t] = 1;
    }

    sum[0] = arr[0];
    for(int i=1; i<LEN; i++){
        sum[i] = sum[i-1] + arr[i];
    }

    for(int i=0; i<q; i++){
        cin >> a >> b;
        cout << sum[b] - sum[a] +  arr[a]<< '\n';
    }

    return 0;
}