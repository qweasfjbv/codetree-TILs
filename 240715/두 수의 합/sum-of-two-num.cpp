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
        if(_map[n] != 0) _map[n]++;
        else _map[n] = 1;

        
    }

    int sum = 0;
    

    for(auto elem : _map){
        if(_map[k-elem.first] != 0) {
            sum += elem.second * _map[k-elem.first];
            _map[k-elem.first] = 0;
        }
    }


    // Output
    cout << sum;


    return 0;
}