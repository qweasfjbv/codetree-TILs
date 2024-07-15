#include <iostream>
#include <set>
using namespace std;

int n, m, a, b;
set<pair<int,int> > oset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        oset.insert(make_pair(a, b));
    }

    for(int i=0; i<m; i++){
        cin >> a >> b;
        auto value = oset.lower_bound(make_pair(a, b));
        if(value == oset.end()) cout << -1 << ' ' << -1 << '\n';
        else cout << value->first << ' ' << value->second << '\n';
    }

    return 0;
}