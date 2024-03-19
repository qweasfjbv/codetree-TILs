#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=0 ;
    for(int i=0; i<n; i++){
        cnt = 1 + i;
        for(int j=0; j<n; j++){
            cout << cnt << " ";
            cnt+= n;
        }
        cout << '\n';
    }
    return 0;
}