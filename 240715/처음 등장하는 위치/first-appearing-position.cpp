#include <iostream>
#include <map>
using namespace std;

int n, t;
map<int, int> m;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        if(m.find(t)== m.end()) m[t] = i + 1;
    }

    for(auto k : m){
        cout << k.first << ' ' << k.second << '\n';
    }

    
    return 0;
}