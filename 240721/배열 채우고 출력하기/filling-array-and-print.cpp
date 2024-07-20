#include <iostream>
using namespace std;

char arr[10];

int main() {

    char c;
    for(int i=9; i>=0; i--){
        cin >> c;
        arr[i] = c;
    }
    for(int i=0; i<10; i++){
        cout << arr[i];
    }
    return 0;
}