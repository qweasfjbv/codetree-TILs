#include <iostream>

using namespace std;

int N;
int arr[100];

int main() {
    cin >> N;

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    for(int i=4; i<=N; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout << arr[N];
    

    return 0;
}
