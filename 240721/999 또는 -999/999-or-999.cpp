#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int _max = -999;
    int _min = 999;

    int n;
    for(int i=0; i<= 100; i++){
        cin >> n;
        if(n==999 || n==-999) break;
        _max = max(_max, n);
        _min = min(_min ,n);
    }
    cout << _max << ' ' <<_min;
    
    return 0;
}