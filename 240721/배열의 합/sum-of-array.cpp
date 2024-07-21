#include <iostream>
using namespace std;

int main() {
    int sum,a;
    for(int i=0; i<4; i++){
        sum = 0;
        for(int j=0; j<4; j++){
            cin >> a;
            sum +=a ;
        }
        cout << sum << '\n';   
    }

    return 0;
}