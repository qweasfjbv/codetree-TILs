#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    int sum = 0;
    int cnt= 0;
    for(int i=0; i<10; i++){
        cin >> a;
        if(a>=0 && a<=200) 
        {sum += a;
        cnt++;
        }
    }
    cout << fixed << setprecision(1) << sum << ' ' << (double)sum/cnt;


    return 0;
}