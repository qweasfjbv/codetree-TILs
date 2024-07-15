#include <iostream>
#include <unordered_set>
using namespace std;

int n, t;
unordered_set<int> uset;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        uset.insert(t);
    }

    cout << uset.size();

    return 0;
}