#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pre, a;
    cin>> pre;
    int _min = 200;
    for(int i=1; i<n; i++){
        cin >> a;
        _min = min(_min, a-pre);
        pre =a;
    }
    cout << _min;
    return 0;
}