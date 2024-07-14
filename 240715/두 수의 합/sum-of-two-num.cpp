#include <iostream>
#include <unordered_map>
using namespace std;

int n, k;
unordered_map<int, int> _map;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    // Input
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> n;
        if(_map.find(n) != _map.end()) _map[n]++;
        else _map[n] = 1;
    }

    int sum = 0;
    

    for(auto elem : _map){
        if(_map.find(k-elem.first) != _map.end()) {
            sum += elem.second * _map[k-elem.first];
            _map.erase(k-elem.first);
        }
    }


    // Output
    cout << sum;


    return 0;
}