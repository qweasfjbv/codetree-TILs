#include <iostream>
using namespace std;

int main() {
    int n;
    int a, b, c, d;
    cin >> n;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> a>> b >> c >> d;
        if((double)(a+b+c+d)/4>=60){
            cout << "pass\n";
            cnt++;
        }
        else cout << "fail\n";
    }
    cout << cnt;
    return 0;
}