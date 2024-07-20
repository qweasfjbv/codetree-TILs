#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    char cnt = 'A';
    for(int i=n; i>=1; i--){
        for(int j=i; j<n; j++){
            cout << "  ";
        }
        for(int j =0; j<i; j++){
            cout << cnt++ << ' ';
            if(cnt=='Z'+1) cnt = 'A';
        }  
        cout << '\n';
    }
    return 0;
}