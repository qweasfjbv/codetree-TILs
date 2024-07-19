#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    bool once = false;
    for(int i=2; i<n; i++){
        if(n%i==0){
            once = true; break;
        }
    }
    if(once) cout << "C";
    else cout << "P";
    return 0;
}