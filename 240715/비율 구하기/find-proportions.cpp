#include <iostream>
#include <map>
#include <iomanip>
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
        cout << k.first << ' ' << fixed << setprecision(4) << (double)k.second/n * 100 << '\n';
    }




    return 0;
}