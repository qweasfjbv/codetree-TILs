#include <iostream>
#include <cmath>
using namespace std;

int n;
int arr[200001] = {0};

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    int a, b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        arr[a]++; arr[b]--;
    }
    int sum =0;
    int max_ = -1;
    for(int i=0; i<200001; i++){
        sum += arr[i];
        max_ = max(max_, sum);
    }

    cout << max_;

    return 0;
}