#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0) {
                cout << i*n + j + 1 << ' ';
            }
            else{
                cout << n*(i+1) - j << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}