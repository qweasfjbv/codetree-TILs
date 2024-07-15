#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<unordered_set<int>> v;
int arr[100001];
int changes[100001][2];

int n, k, a, b, t;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> k;
    v.resize(n);
    for(int i=0; i<n; i++){
        arr[i] = i;
        v[i].insert(i);
    }

    for(int i=0; i<k; i++){
        cin >> a >> b;
        a--; b--;
        changes[i][0] = a; changes[i][1] = b;
    }

    
    for(int j = 0; j<3; j++){
    for(int i=0; i<k; i++){
        a = changes[i][0]; b = changes[i][1];

        t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;

        v[arr[a]].insert(a);
        v[arr[b]].insert(b);
    }
    }

    for(int i=0; i<n; i++){
        cout << v[i].size() << '\n';
    }


    return 0;
}