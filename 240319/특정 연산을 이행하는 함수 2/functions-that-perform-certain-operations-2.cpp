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

    int tmpc = (int)(c*10);
    if(tmpc%10 >= 5) tmpc = tmpc/10+1;
    else tmpc = tmpc/10;

    cout << (int)a + 1 << " " << (int)b << " " << tmpc;
    return 0;
}