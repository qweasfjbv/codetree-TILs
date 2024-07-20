#include <iostream>
using namespace std;

int arr[101];

int main() {
    int a;
    for(int i=0; i<=100; i++){
        cin >> a;
        if(a==0){
            cout << arr[i-2] + arr[i-1]  + arr[i-3];
            return 0;
        }
        else{
            arr[i] = a;
        }
    }


    return 0;
}