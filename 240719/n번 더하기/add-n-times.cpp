#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >>a>>b;
    for(int i=0; i<b; i++){
        a += b;
        cout << a << '\n';
    }
    return 0;
}