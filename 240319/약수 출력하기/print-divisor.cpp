#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll N;
    cin >> N;
    vector<ll> list;

    for(ll i=1; i*i <= N; i++){
        if(N%i == 0) {list.push_back(i); if(N/i != i) list.push_back(N/i);}
    }
    sort(list.begin(), list.end());

    for(auto k : list){
        cout << k << " ";
    }

    return 0;
}