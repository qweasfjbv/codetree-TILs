#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int N;
int arr[100001];
int L[100001];
int R[100001];

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    cin>>N;

    for(int i=0;i<N;i++) cin >>arr[i];

    for(int i=0; i<N; i++){
        L[i] = (i!=0)? max(L[i-1], arr[i]) : arr[0];
        R[N-i-1] = (i!=0)? max(R[N-i], arr[N-i-2]) : arr[N-1];
    }

    int _max = -1;
    for(int i=2; i<N-2; i++){
        _max =max(_max, arr[i] + L[i-2] + R[i+2]);
    }
    cout << _max;
    return 0;
}