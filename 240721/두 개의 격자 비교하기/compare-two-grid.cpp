#include <iostream>
using namespace std;

int a, b;
int arr[10][10];

int main() {
    
    int n;
    cin >> a >> b;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> n;
            arr[i][j] = n;
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> n;
            if(n==arr[i][j])cout << 0 << ' ';
            else cout << 1 << ' ';
        }
        cout << '\n';
    }

    return 0;
}