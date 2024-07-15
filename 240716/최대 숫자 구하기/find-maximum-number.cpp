#include <iostream>
#include <set>
using namespace std;

int n, m, t;
set<int> oset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        oset.insert(i+1);
    }

    for(int i=0; i<n; i++){
        cin >> t;
        oset.erase(t);
        cout << *oset.rbegin() << '\n';    
    }

    return 0;
}