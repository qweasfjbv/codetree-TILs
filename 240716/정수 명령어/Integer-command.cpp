#include <iostream>
#include <set>
using namespace std;

int T, k, t;
char com;
set<int> oset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> T;
    for(int j = 0 ;j<T; j++){
        cin >> k;
        oset.clear();
        for(int i=0; i<k; i++){
            cin >> com;
            if(com == 'I'){
                cin >> t;
                oset.insert(t);
            }
            else if(com == 'D'){
                cin >> t;
                if(oset.empty()) continue;
                if(t==1) oset.erase(*oset.rbegin());
                else oset.erase(*oset.begin());
            }
        }

        if(oset.empty()) cout << "EMPTY\n";
        else cout << *oset.rbegin() << ' ' << *oset.begin() << '\n';
    }
    

    return 0;
}