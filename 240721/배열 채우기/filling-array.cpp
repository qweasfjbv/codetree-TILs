#include <iostream>
using namespace std;

int arr[10];
int main() {
    int i = 0;
    int a;
    while(i<10){
        cin >> a;

        arr[i] = a;
        if(arr[i] == 0) {
            break;}
        i++;
    }

    i--;
    for(; i>=0; i--){
        cout << arr[i] << ' ';
    }

    return 0;
}