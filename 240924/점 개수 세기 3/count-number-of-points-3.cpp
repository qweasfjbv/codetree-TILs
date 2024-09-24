#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

int n, q, a, b;
unordered_map<int, int> umap;
set<int> oset;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> a;
        oset.insert(a);
    }

    int cnt = 0;
    for(auto iter : oset){
        umap[iter] = cnt++;
    }

    for(int i=0; i<q; i++){
        cin >> a >> b;
        cout << umap[b] - umap[a] + 1 << '\n';
    }

    return 0;
}