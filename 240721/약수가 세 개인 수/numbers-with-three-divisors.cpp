#include <iostream>
using namespace std;

int main() {
    int a, b;cin >> a >> b;
    int cnt1 =0;
    for(int i=a; i<=b; i++){
        int cnt=0;
        for(int j=1; j<=i; j++){
            if(i%j==0)cnt++;
        }
        if(cnt==3) cnt1++;
    }
    cout << cnt1;
    return 0;
}