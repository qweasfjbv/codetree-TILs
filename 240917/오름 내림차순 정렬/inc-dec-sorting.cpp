#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a;
vector<int> arr;
int main() {
    int n;
    cin >> n;
    

    for(int i=0; i<n; i++){
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
    
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << ' ';
    }
    return 0;
}