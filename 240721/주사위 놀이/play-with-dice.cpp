#include <iostream>
using namespace std;

int arr[7] = {0,0,0,0,0,0,0};

int main() {
    int a;
    for(int i=0; i<10 ;i++){
        cin >> a;
        arr[a]++;
    }
    for(int i=1; i<=6; i++){
        cout << i << " - " << arr[i] << '\n';
    }
    return 0;
}