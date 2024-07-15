#include <iostream>
#include <set>
using namespace std;

int n, m, t;
set<int> oset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> t;
        oset.insert(t);
    }
    
    for(int i=0; i<m; i++){
        cin >> t;
        auto k = oset.lower_bound(t);
        if(k==oset.end()) cout << -1 << "\n";
        else cout << *k << '\n';
    }
    return 0;
}