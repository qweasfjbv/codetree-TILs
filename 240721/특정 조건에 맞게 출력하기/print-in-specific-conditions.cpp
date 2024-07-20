#include <iostream>
using namespace std;

int arr[101];

int main() {
    
    int a;
    for(int i=0 ;i<100; i++){
        cin >> a;
        if(a!=0){
            if(a%2==0) cout << a/2 << ' ';
            else cout << a+3 << ' ';
        }
        else break;
    }
    return 0;
}