#include <iostream>
#include <set>
using namespace std;

int n, q, a, b;
set<int> oset;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> a;
        oset.insert(a);
    }

    for(int i=0; i<q; i++)
    {
        cin >> a >> b;
        cout << distance(oset.begin(), oset.lower_bound(b)) - distance(oset.begin(), oset.lower_bound(a)) + 1 << '\n';
    
    }
    return 0;
}