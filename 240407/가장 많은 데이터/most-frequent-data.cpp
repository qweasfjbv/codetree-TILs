#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    unordered_map<string, int> map;

    int n; string s;

int m = -1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(map.count(s) == 0)
            map[s] = 1;
        else map[s] = map[s] + 1;

        for(auto k : map){
            m = max(k.second, m);
        }
    }

    cout << m;

    return 0;
}