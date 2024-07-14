#include <iostream>
#include <map>
using namespace std;

int n, k;
map<int, int> _map;

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
        if(elem.first > k/2) break;
        else if(k%2==0 && elem.first >= k/2){
            sum += elem.second * (elem.second -1)/2;
            break;
        }

        if(_map.find(elem.first) != _map.end()) {
            sum += elem.second * _map[elem.first];
        }
    }


    // Output
    cout << sum;


    return 0;
}