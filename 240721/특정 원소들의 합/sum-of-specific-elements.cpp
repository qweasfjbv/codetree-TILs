#include <iostream>
using namespace std;

int main() {
    int sum =0;
    int n;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> n;
            if(i>=j) sum += n;
        }
    }

    cout << sum;
    return 0;
}