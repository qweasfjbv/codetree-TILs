#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    char cnt = 'A';

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << cnt++;
        }
        cout << '\n';
    }
    return 0;
}