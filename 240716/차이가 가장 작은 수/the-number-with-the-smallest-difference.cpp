#include <iostream>
#include <set>
#include <cmath>
using namespace std;

#define LIMIT 1e9

int n, m, t;
int value;
set<int> oset;
set<int>::iterator iter;
int _min = LIMIT;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> t;
        oset.insert(t);
    }

    for(auto k : oset){
        value = k + m;
        iter = oset.lower_bound(value);

        if(iter == oset.end()) continue;
        _min = min(_min, *iter-k);
        
    }

    cout << _min;


    return 0;
}