#include <iostream>
using namespace std;

int arr[10];

int main() {
    int n; cin >> n;
    for(int i=0; i<10; i++) arr[i] = 0;
    int a;
    for(int i=0; i<n ;i++){
        cin >> a;
        arr[a]++;
    }

    for(int i=1; i<10; i++){
        cout << arr[i] << '\n';
    }

    return 0;
}