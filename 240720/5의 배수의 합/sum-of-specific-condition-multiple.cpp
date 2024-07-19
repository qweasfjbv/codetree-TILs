#include <iostream>
using namespace std;

int main() {
    
    int a, b;cin >> a >> b;
    int sum =0;
    int tmp;
    if(a>b){
        tmp = a;
        a = b;
        b = tmp;
    }
    for(int i=a; i<=b; i++){
        if(i%5==0) sum += i;
    }   

    cout << sum;

    return 0;
}