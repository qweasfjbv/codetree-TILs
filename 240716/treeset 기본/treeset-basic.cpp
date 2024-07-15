#include <iostream>
#include <set>
#include <string>
using namespace std;

int n, a;
string s;
set<int> oset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n ;i++){
        cin >> s;
        if(s.compare("add") == 0){
            cin >> a;
            oset.insert(a);
        }
        else if(s.compare("remove")== 0){
            cin >> a;
            oset.erase(a);
        }
        else if(s.compare("find")== 0){
            cin >> a;
            if(oset.find(a) == oset.end()){
                cout << "false\n";
            }
            else cout << "true\n";
        }
        else if(s.compare("lower_bound")== 0){
            cin >> a;
            auto lb = oset.lower_bound(a);
            if(lb == oset.end()) cout << "None\n";
            else cout << *lb << '\n';
        }
        else if(s.compare("upper_bound")== 0){
            cin >> a;
            auto ub = oset.upper_bound(a);
            if(ub == oset.end()) cout << "None\n";
            else cout << *ub << '\n';
            
        }
        else if(s.compare("largest")== 0){
            if(oset.empty()) cout << "None\n";
            else cout << *oset.rbegin() << '\n';
        }
        else if(s.compare("smallest")== 0){
            if(oset.empty()) cout << "None\n";
            else cout << *oset.begin() << '\n';
        }
    }


    return 0;
}