#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {
    
    int n, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cout << v[v.size()-1] << ' ' << v[v.size()-2];



    return 0;
}