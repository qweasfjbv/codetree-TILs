#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int n, m;

unordered_map<string, int> si;
unordered_map<int, string> sir;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

string tmp;
int t;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> tmp;
        si[tmp] = i;
        sir[i] = tmp;
    }

    for(int i=0; i<m; i++){
        cin >> tmp;
        if(tmp[0] >= '0' && tmp[0] <= '9'){
            t = stoi(tmp);
            cout << sir[t] << '\n';
        }
        else{
            cout << si[tmp] << '\n';
        }
    }


    return 0;
}