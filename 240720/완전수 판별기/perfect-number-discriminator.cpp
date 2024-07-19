#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    sum =0;
    for(int i=1; i<n; i++){
        if(n%i==0) sum += i;
    }
    cout << (sum==n ? "P" : "N");
    return 0;
}