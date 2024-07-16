#include <iostream>
#include <unordered_map>
using namespace std;

int n, k;
int arr[1001];
unordered_map<int, int> umap;
unordered_map<int, int> copymap;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        umap[arr[i]]++;
    }

    int count = 0;
    int dif;
    for(int i=0; i<n; i++){
        umap[arr[i]]--;
        copymap = umap;
        for(int j=i+1; j<n; j++){
            copymap[arr[j]]--;
            if(i==j) continue;
            dif = k - arr[i] - arr[j];
            count += copymap[dif];
        }
    }

    
    cout << count;

    return 0;
}