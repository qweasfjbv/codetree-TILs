#include <iostream>
#include <unordered_map>
using namespace std;

int n, m, a;
int arr[100002][2];
unordered_map<int, int> umap;
int value[100002];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >>n >> m;
    
    for(int i=1; i<=n; i++){
        arr[i][0] = i-1;
        arr[i][1] = i+1;
    }
    arr[1][0] = n;
    arr[n][1] = 1;

    int pre = 0;
    int first;
    for(int i=1; i<=n; i++){
        cin >> a;
        umap[a] = i;
        value[i] = a;
    }


    for(int i=0; i<m; i++){
        cin >> a;


        arr[arr[umap[a]][0]][1] = arr[umap[a]][1];
        arr[arr[umap[a]][1]][0] = arr[umap[a]][0];


        cout << value[arr[umap[a]][1]] << ' ' << value[arr[umap[a]][0]] << '\n';

    }
    
    return 0;
}