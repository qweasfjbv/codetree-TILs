#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    int tmp;
    if(a<c){
        tmp = a;
        a = c;
        c = tmp;
    }    
    if(c<b){
        tmp = c;
        c =b;
        b = tmp;
    }
    if(a < b){
        tmp = a;
        a = b;
        b = tmp;
    }


    cout << (int)a + 1 << " " << (int)b << " " << (int)(c+0.5);
    return 0;
}