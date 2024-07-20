#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sum1, sum2, n, a;
    int cnt =0;
    sum1 = sum2 = 0;
    for(int i=1; i<=10; i++){
        cin >> a;
        if(i%2==0){
            sum1 +=a;
        }
        
        if(i%3==0){
            sum2 += a;
            cnt++;
        }
    }

    cout << fixed << setprecision(1);
    cout << sum1 << ' ' << (double)sum2/cnt;
    return 0;
}