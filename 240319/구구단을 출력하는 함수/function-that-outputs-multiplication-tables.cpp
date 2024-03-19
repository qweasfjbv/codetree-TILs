#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int tmp;
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a>c){
        tmp = c;
        c= a;
        a= tmp;
    }
    if(b>c){
        tmp = b;
        b = c;
        c= tmp;
    }

    for(int i=a; i<=c; i++){
        if(i == b) continue;
        for(int j = 1; j<=9; j++){
            cout << i << " * " << j << " = " << i*j << '\n';
        }
    }


    return 0;
}