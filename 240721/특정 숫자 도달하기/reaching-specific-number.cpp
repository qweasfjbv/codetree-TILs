#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cnt = 0;
    int a;
    int sum =0;

    while(cnt != 10){
        cin >> a;
        if(a>=250) break;
        cnt++;
        sum += a;
    }

    cout <<sum << ' ' << fixed << setprecision(1) << (double)sum/cnt;
    return 0;
}