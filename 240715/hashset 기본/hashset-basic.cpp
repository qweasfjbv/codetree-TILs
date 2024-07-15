#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int n, t;
string s;
unordered_set<int> uset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s.compare("find") == 0){
            cin >> t;
            if(uset.find(t) == uset.end()) cout << "false\n";
            else cout << "true\n";
        }
        else if(s.compare("add") == 0){
            cin >> t;
            uset.insert(t);
        }
        else if(s.compare("remove") == 0){
            cin >> t;
            uset.erase(t);
        }
    }
    return 0;
}