#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int n;
    int cnt =0;
    int sum = 0;
    while(true){
        cin >> n;

        if(n<20 || n>=30) break;
        sum += n;

        cnt++;
    }
    cout << fixed << setprecision(2) << (double)sum/cnt;

    return 0;
}