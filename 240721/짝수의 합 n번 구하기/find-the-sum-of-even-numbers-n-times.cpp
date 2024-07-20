#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a, b;
    for(int t=0; t<n; t++){
        cin >> a >> b;
        int sum =0;
        for(int i=a; i<=b; i++){
            if(i%2==0) sum += i;
        }
        cout << sum << '\n';
    }
    return 0;
}