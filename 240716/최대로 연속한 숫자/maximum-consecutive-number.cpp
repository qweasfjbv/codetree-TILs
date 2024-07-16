#include <iostream>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int n, m, t, s;
int rem;
set<int> oset;
set<int>::iterator iter;
map<int, int> umap;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    oset.insert(-1);
    oset.insert(n+1);
    umap[-n-2]++;

    for(int i=0; i<m; i++) {
        cin >> t;
        oset.insert(t);

        iter = oset.upper_bound(t);
        rem  = *iter;
        iter--; iter--;
        umap[t-rem]++;
        umap[*iter-t]++;

        umap[*iter-rem]--;
        if(umap[*iter-rem] == 0) umap.erase(*iter-rem);

        cout << -1-umap.begin()->first << '\n';

    }   

    return 0;
}