#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; cin >> n;
    double a;
    double sum = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        cnt++;
        sum += a;

    }
    double avg = sum/cnt;
    cout << fixed << setprecision(1);
    cout << avg << '\n';
    if(avg>=4.0) cout << "Perfect";
    else if(avg >= 3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}