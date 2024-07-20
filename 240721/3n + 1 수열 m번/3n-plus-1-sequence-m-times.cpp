#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> n;
        int cnt = 0;

        while(n!=1){
            cnt++;
            if(n%2==0) n/=2;
            else n = n*3+1;
        }
        cout << cnt << '\n';
    }
    return 0;
}