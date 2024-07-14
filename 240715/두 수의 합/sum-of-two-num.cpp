#include <iostream>
#include <unordered_map>
using namespace std;

typedef long long int ll;

int n;
ll k;
unordered_map<ll, int> _map;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);


    ll tmp;
    // Input
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> tmp;
        if(_map[tmp] != 0) _map[tmp]++;
        else _map[tmp] = 1;

        
    }

    ll sum = 0;
    

    for(auto elem : _map){
    if(k%2== 0 && elem.first == k/2) {
        sum += elem.second * (elem.second-1)/2;
        continue;
    }
        if(_map[k-elem.first] != 0) {
            sum += elem.second * _map[k-elem.first];
            _map[k-elem.first] = 0;
        }
    }


    // Output
    cout << sum;


    return 0;
}