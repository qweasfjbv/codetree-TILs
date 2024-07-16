#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int n;
int arr[100001];
float _fmax = -1;
int _imin = 10001;
int sum = 0;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){cin >> arr[i];}

    _imin = arr[n-1];
    sum += arr[n-1];
    for(int i=n-2; i>=1; i--){
        sum += arr[i];
        _imin = min(_imin, arr[i]);
        _fmax = max(_fmax, (float)(sum - _imin) / (n-i-1));

    }

    cout << fixed << setprecision(2) << _fmax;
    return 0;
}