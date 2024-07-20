#include <iostream>
using namespace std;

int arr[1001];

int main() {
    int n, a;
    for(int i=0; i<1001; i++) arr[i] = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        arr[a]++;
    }

    int idx = -1;
    for(int i=1000; i>=0; i--){
        if(arr[i] == 1) idx = i;
    }
    cout << idx;
    return 0;
}