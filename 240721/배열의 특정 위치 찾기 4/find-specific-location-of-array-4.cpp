#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cnt = 0;
    int a;
    int sum =0;

    while(cnt != 10){
        cin >> a;
        if(a==0) break;
        if(a%2==0){
        cnt++;
        sum += a;
        }
    }

    cout << cnt << ' ' << sum;
    return 0;
}