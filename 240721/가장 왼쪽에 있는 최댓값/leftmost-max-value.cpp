#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int n;

int main() {
    
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int idx = n-1;
    int rem = -1;
    int _max = -1;

    while(idx != 0){
        _max = -1;
        for(int i=0; i<=idx-1; i++){
            if(_max < v[i]){
                _max = v[i];
                rem = i;
            }
        }

        idx = rem;
        cout << idx+1 << ' ';

    }
    return 0;
}