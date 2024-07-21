#include <iostream>
using namespace std;

int main() {
    int cnt= 1;
    int n, m;  cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << cnt++ << ' ';
        }
        cout << "\n";
    }
    return 0;
}