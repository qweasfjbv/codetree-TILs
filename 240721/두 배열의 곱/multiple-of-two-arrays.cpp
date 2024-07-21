#include <iostream>
using namespace std;

int arr[3][3];

int main() {
    
    int n;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> n;
            arr[i][j] = n;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> n;
            cout << arr[i][j] * n << ' ';
        }
        cout << '\n';
    }

    return 0;
}