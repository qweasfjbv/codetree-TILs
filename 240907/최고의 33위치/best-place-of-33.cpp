#include <iostream>
#include <cmath>
using namespace std;

int N;
int _max = -1;
int arr[21][21];

int Check(int a, int b){
    int cnt = 0;
    for(int i = a; i<a+3; i++){
        for(int j = b; j<b+3; j++){
            if(arr[i][j] == 1) {cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }

    _max = -1;
    for(int i=0; i<N-2; i++){
        for(int j=0; j<N-2; j++){
            _max = max(_max, Check(i, j));
        }
    }

    cout << _max;

    return 0;
}