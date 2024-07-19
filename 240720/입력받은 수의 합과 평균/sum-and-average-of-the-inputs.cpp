#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int a;
    int sum =0;
    for(int i=0; i<n; i++){
        cin >> a;
        sum += a;
    }
    cout << sum << ' ' << fixed << setprecision(1) << (double)sum/n;

    return 0;
}