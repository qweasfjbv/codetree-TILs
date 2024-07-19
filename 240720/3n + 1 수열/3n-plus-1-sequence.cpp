#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=0;
    
        if(n==1){
            cout << 0; return 0;
        }
    while(true){
        cnt++;
        if(n%2==0) n=n/2;
        else n = n*3+1;

        if(n==1) break;
    }
    cout << cnt;
    return 0;
}