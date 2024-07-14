#include <iostream>
#include <unordered_map>
using namespace std;

int n, k;
unordered_map<int, int> _map;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);


    int tmp;
    // Input
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> tmp;
        if(_map[tmp] != 0) _map[tmp]++;
        else _map[tmp] = 1;

        
    }

    int sum = 0;
    

    for(auto elem : _map){
    if(k%2== 0 && elem.first == k/2) {
        sum += elem.second * (elem.second-1)/2;
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