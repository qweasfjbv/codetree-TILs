#include <iostream>
#include <map>
using namespace std;

string s;
int n;
map<string, int> m;


int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        m[s]++;
    }

    for(auto k : m){
        cout << k.first << ' ' << k.second << '\n';
    }

    return 0;
}