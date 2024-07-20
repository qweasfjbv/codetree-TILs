#include <iostream>
using namespace std;

int arr[101];

int main() {
    cin >> arr[0] >> arr[1] ;
    cout << arr[0] << ' '<< arr[1] << ' ';
    for(int i=2; i<10; i++){
        arr[i] = arr[i-1] + 2 * arr[i-2];
        cout << arr[i] << ' ';
    }
    return 0;
}