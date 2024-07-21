#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> v;

int main() {
    
    int n, a;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    int _max = -1;
    int ans =-1;
    for(int i=v.size()-1; i>=0; i--){
        _max = max(_max, v[i]);
        ans = max(ans, _max - v[i]);
    }
    cout << ans;

    return 0;
}