#include <iostream>
#include <vector>
using namespace std;

int n, m, a, b;
vector<int> v;

int bin_search(int start, int end, int value){
    int idx = -1;
    while(start <=end){
        int mid = (start+end)/2;
        if(v[mid] == value) {
            idx = mid;break;
        }
        
        if(v[mid] > value)
            end = mid-1;
        else
            start = mid+1;
    }

    return idx;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    v.push_back(-1);
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    for(int i=0; i<m; i++){
        cin >> b;
        cout << bin_search(0, n, b) << '\n';
    }
    

    return 0;
}