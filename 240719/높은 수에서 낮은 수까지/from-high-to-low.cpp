#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c;
    if(a>b){
        c = a;
        a = b;
        b = c;
    } 

    for(int i=b; i>=a; i--){
        cout << i << ' ';
    }
    return 0;
}