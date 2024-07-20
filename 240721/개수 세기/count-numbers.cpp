#include <iostream>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m;
    int cnt =0;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a == m) cnt++;
    }
    cout << cnt;
    return 0;
}