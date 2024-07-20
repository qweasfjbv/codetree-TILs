#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cnt = 0;
    int a;
    int sum =0;
    int count =0;
    while(count != 10){
        cin >> a;
        if(a==0) break;
        if(a%2==0){
        cnt++;
        sum += a;
        }
        count++;
    }

    cout << cnt << ' ' << sum;
    return 0;
}