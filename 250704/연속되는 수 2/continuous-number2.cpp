#include <iostream>
#include <cmath>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int _max = -1;
    int count =0;
    int prev= -1;
    for(int i=0; i<N; i++){
        if(arr[i] != prev){
            _max = max(_max, count);
            count = 0;
            prev= arr[i];
        }
        count++;
    }

    _max = max(_max, count);
    cout << _max;
    return 0;
}