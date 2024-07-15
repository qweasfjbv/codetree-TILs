#include <iostream>
#include <unordered_set>
using namespace std;

int n, m, t;
unordered_set<int> aset;
unordered_set<int> bset;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> t;
        aset.insert(t);
    }

    for(int i=0; i<m; i++){
        cin >> t;
        bset.insert(t);
    }
    
    int value;
    for(auto k : aset){
        value = k;
        if(bset.find(value) == bset.end()) {
            bset.insert(value);
        }
        else{
            bset.erase(value);
        }
    }
    
    cout << bset.size();
    

    return 0;
}