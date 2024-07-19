#include <iostream>
using namespace std;

int main() {
    int a;
    int b= 0;
    int c=0;
    for(int i=0; i<10; i++){
        cin >> a;
        if(a%3==0) b++;
        if(a%5==0) c++;
    }
    cout << b << ' ' << c;
    return 0;
}