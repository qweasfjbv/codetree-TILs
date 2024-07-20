#include <iostream>
using namespace std;

int arr[11] = {0,0,0,0,0,0,0,0,0,0,0};

int main() {
    
    int n;
    for(int i=0; i<=100; i++){
        cin >> n;
        arr[n/10]++;
        if(n==0) break;
    }


    for(int i=10; i>=1; i--){
        cout << i*10 << " - " << arr[i] << '\n';
    }

    return 0;
}