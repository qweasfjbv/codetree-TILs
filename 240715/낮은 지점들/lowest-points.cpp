#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;
typedef long long int ll;

int n;
ll a, b;
unordered_map<ll, ll> umap;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> a >> b;
        
        if(umap.find(a) == umap.end()){
            umap[a] = b;
        }
        else{
            umap[a] = min(umap[a], b);
        }
    }

    ll sum = 0;
    for(auto k : umap){
        sum += k.second;
    }

    cout << sum;


    return 0;
}