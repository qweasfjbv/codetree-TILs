#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mul = 1;
    for(int i=1; i<=n; i++){
        mul  *= i;
        if(mul >=n){
            cout << i;break;
        }
    }
    return 0;
}