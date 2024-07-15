#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

unordered_map<string, int> umap;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string s;

    for(int i=0; i<n; i++){
        cin >> s;
        sort(s.begin(), s.end());
        umap[s]++;
    }

    int _max = -1;
    for(auto k : umap){
        _max = max(_max, k.second);
    }
    
    cout << _max;

    return 0;
}