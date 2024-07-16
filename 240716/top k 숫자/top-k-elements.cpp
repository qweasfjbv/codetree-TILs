#include <iostream>
#include <set>
using namespace std;

int k, n, t;
int ans;
set<int> oset;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >>  n >> k;

    for(int i=0; i<n; i++){
        cin >> t;
        oset.insert(t);
    }

    for(int i=0; i<k; i++){
        ans = *oset.rbegin();
        cout << ans << ' ';
        oset.erase(ans);
    }

    return 0;
}