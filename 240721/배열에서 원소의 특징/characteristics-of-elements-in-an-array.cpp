#include <iostream>
using namespace std;

int arr[11];

int main() {
    
    int n;
    for(int i=0; i<10; i++){
        cin >> n;
        arr[i] = n;
        if(n%3==0){ cout << arr[i-1]; break;}
    }
    return 0;
}