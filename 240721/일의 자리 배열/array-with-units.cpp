#include <iostream>
using namespace std;

int arr[10];

int main() {
    
    cin >> arr[0] >>arr[1];
    for(int i=2; i<=9; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    for(int i=0; i<=9; i++){
        cout << arr[i]%10 << ' ';
    }
    return 0;
}