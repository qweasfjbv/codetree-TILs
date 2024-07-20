#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int _max = INT_MIN;

    int a;
    for(int i=0; i<10 ;i++){
        cin >> a;
        _max = max(_max, a);
    }
    cout << _max;

    return 0;
}