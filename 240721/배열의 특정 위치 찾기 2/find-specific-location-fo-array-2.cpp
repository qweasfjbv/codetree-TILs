#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum1, sum2;
    sum1 = sum2 = 0;
    int a;
    for(int i=1; i<=10; i++){
        cin >> a;
        if(i%2==0) sum1+=a;
        else sum2 += a;
    }
    cout << abs(sum1-sum2);
    return 0;
}