#include <iostream>
#include <unordered_map>
using namespace std;

int n;
int arr[4][5001];
unordered_map<int, int> umap1;
unordered_map<int, int> umap2;


int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    // Input
    cin >> n;
    for(int i=0; i<4; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            umap1[arr[0][i] + arr[1][j]]++;
            umap2[arr[2][i] + arr[3][j]]++;
        }
    }

    int ans = 0;
    int dif;
    for(auto k : umap1){
        dif = -k.first;
        if(umap2[dif] == 0) continue;

        ans += k.second * umap2[dif];
    }

    cout << ans;
    

    return 0;
}