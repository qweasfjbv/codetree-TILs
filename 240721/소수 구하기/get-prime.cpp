#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i=2; i<=n; i++){
        bool once = false;
        if(i==2) cout << i << ' ';
        else{
            for(int j=2; j<i; j++){
                if(i%j==0){
                    once = true; break;
                }
            }
            if(!once) cout << i << ' ';

        }
    }
    return 0;
}