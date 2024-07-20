#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    int cnt = 0;
    int sum = 0;
    for(int i=a; i<=b; i++){

        sum =0;
        for(int j=1; j< i; j++){
            if(i%j==0) sum += j;
        }

        if(sum == i) cnt++;
    }   
    cout << cnt;
    return 0;
}