#include <iostream>
using namespace std;

int main() {
    int n, a, cnt;
    cnt =0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a==2) {
            cnt++;
            if(cnt==3) {
                cout << i+1;
                return 0;
            }
        }
    }
    return 0;
}