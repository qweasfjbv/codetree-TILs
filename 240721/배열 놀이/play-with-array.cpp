#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {

    int n, q, a, b; cin >> n >> q;
    for(int i=0 ;i<n ;i++){
        cin >> a;
        v.push_back(a);
    }

    int com;
    for(int i=0; i<q; i++){
        cin >> com;
        switch(com){
            case 1:
            cin >> a;
            cout << v[a-1] << '\n';
            break;

            case 2:
            cin >> a;
            {
            auto iter = find(v.begin(), v.end(), a);
            if(iter != v.end()){
                cout << iter-v.begin() + 1 << '\n';
            }
            else cout << 0 << '\n';
            break;
            }

            case 3:
            {
            cin >> a>> b;
            for(int i=a; i<=b; i++){
                cout << v[i-1] << ' ';
            }
            cout << '\n';
            break;
            }

        }
    }
    
    return 0;
}