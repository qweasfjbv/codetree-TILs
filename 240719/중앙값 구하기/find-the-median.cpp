#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int _max = max(a, max(b,c));
    int _min = min(a, min(b,c));
    
    if(a!=_max && a!=_min) cout << a;
    if(b!=_max && b!=_min) cout << b;
    if(c!=_max && c!=_min) cout << c;

    
    return 0;
}