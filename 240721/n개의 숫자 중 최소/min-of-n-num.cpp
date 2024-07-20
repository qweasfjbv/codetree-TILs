#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int cnt =0;
    int _min = INT_MAX;
    int n, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        
        if(_min > a){
            _min = a;
            cnt =1;
        }
        else if(_min == a) cnt++;
    }
    cout << _min << ' ' << cnt;
    return 0;
}