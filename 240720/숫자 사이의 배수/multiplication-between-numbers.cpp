#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum =0;
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(i%5==0 || i%7==0){sum += i; cnt++;}
    }

    cout << sum << fixed << setprecision(1) << ' ' <<(double)sum/cnt;
    return 0;
}