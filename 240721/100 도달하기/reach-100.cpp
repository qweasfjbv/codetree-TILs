#include <iostream>
using namespace std;

int arr[100];

int main() {
    cin >> arr[1];
    arr[0] = 1;
    cout << 1 << ' '<< arr[1] <<' ';
    for(int i=2; i<100; i++){
        arr[i] = arr[i-1] + arr[i-2];

        cout << arr[i] << ' ';
        if(arr[i]>100) break;
    }

    
    return 0;
}