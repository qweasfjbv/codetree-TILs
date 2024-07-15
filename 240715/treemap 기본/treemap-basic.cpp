#include <iostream>
#include <string>
#include <map>
using namespace std;

string s;
int n, k, v;
map<int, int> m;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        if(s.compare("add") == 0){
            cin >> k >> v;
            m[k] =v;
        }
        else if(s.compare("find") == 0){
            cin >> k;
            if(m.find(k) == m.end()) cout << "None\n";
            else cout << m[k] << '\n';
        }
        else if(s.compare("remove") == 0){
            cin >> k;
            m.erase(k);
        }
        else if(s.compare("print_list")==0){
            if(m.empty()) cout << "None";
            else {
                for(auto k : m){
                    cout << k.second << ' ';
                }
            }
            cout << "\n";
        }
    }

    return 0;
}