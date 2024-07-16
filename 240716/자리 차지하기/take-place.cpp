#include <iostream>
#include <set>
using namespace std;

int n, m, t;
int cnt = 0;
set<int> oset;
set<int>::iterator iter;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for(int i=1; i<=m; i++){
        oset.insert(-i);
    }
    for(int i=0; i<n; i++){
        cin >> t;
        iter = oset.lower_bound(-t);

        if(iter == oset.end()) break;
        cnt++;
        oset.erase(*iter);
    }

    cout << cnt;
    return 0;
}