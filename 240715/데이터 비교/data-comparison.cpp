#include <iostream>
#include <unordered_set>
using namespace std;

bool once = false;
int n, m, t;
unordered_set<int> uset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        uset.insert(t);
    }
    cin >> m;
    for(int i= 0; i<m; i++){
        cin >> t;
        if(uset.find(t) != uset.end()){
            cout << 1 <<' ' ;
        }
        else 
            cout << 0 <<' ' ;
    }


    return 0;
}