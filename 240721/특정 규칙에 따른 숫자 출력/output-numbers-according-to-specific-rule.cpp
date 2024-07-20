#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt =1;
    for(int i=n; i>0;i--){
        
        for(int j=n; j>i; j--){
            cout << "  ";
        }
        for(int j=i; j>0; j--){
            cout << cnt++ << ' ';
            if(cnt==10) cnt = 1;
        }
        cout << '\n';
    }

    return 0;
}