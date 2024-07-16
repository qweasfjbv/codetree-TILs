#include <iostream>
#include <string>
#include <set>
using namespace std;

string com;
int n, m, a, b;
set<pair<int,int>> oset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        oset.insert(make_pair(b, a));
    }
    cin >>  m;
    for(int i=0; i<m; i++){
        cin >> com;
        if(com.compare("rc") == 0){
            cin >> a;
            if(a == 1) cout << oset.rbegin()->second<< '\n';
            else cout << oset.begin()->second<< '\n';
        }
        else if(com.compare("ad") == 0){
            cin >> a >> b;
            oset.insert(make_pair(b, a));   
        }
        else if(com.compare("sv") == 0){
            cin >> a >> b;
            oset.erase(make_pair(b, a));   
        }
    }


    return 0;
}