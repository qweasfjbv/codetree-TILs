#include <iostream>
using namespace std;

int main() {
    char c;
    int a;
    cin >> c>> a;
    if(c=="Y"){
        cout << (a>=37 ? "A" : "C");
    }
    else{
        cout << (a>=37 ? "B" : "D");
    }
    return 0;
}