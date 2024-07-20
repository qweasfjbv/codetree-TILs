#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, sum;
    sum =0;
    for(int i=0; i<8; i++){
        cin >> a;
        sum += a;
    }
    cout << fixed << setprecision(1) << sum/8;
    return 0;
}