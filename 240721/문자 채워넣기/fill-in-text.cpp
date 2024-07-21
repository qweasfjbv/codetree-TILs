#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    char c;
    cin >> n;
    char pre = '0';
    char start;
    int cnt= 1;
    for(int i=0; i<n; i++){
        cin >> c;
        if(i==0) start  = c;
        if(pre != c && pre == start) cnt++;

        pre = c;
    }

    cout << cnt;

    return 0;
}