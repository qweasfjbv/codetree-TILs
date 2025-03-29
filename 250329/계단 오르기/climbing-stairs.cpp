#include <iostream>

using namespace std;

int n;
int arr[1001];

int main() {
    cin >> n;

    arr[0] = 1;
    for(int i=1; i<=n; i++){
        if(i>=2) arr[i] = (arr[i] + arr[i-2]) % 10007;
        if(i>=3) arr[i] = (arr[i-3] + arr[i]) % 10007;
    }

    cout << arr[n];

    return 0;
}