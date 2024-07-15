#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int n, a;
int _min = 1e9+1;
set<int> oset;
set<int>::iterator curIter, underIter, upperIter;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    oset.insert(0);
    for(int i=0; i<n; i++){
        cin >> a;
        oset.insert(a);

        set<int>::iterator iter = oset.upper_bound(a);
        
        if(iter != oset.end()) _min = min(_min, *(iter--) - *iter);
        else iter--;

        _min = min(_min, *(iter--) - *iter);

        cout << _min << '\n';

    }

    return 0;
}