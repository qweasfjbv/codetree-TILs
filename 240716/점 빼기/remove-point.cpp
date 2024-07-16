#include <iostream>
#include <set>
using namespace std;

int n, m, k, a, b;
set<pair<int,int>> oset;
set<pair<int,int>>::iterator iter;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for(int i =0; i<n; i++){
        cin >> a >> b;
        oset.insert(make_pair(a, b));
    }

    for(int i =0; i<m; i++){
        cin >> a;
        iter = oset.lower_bound(make_pair(a, a));

        if(iter == oset.end()){
            cout << -1 << ' ' << -1 << '\n';
        }
        else{
            cout << iter->first << ' ' << iter->second << '\n';
            oset.erase(*iter);
        }
        
    }   
    return 0;
}