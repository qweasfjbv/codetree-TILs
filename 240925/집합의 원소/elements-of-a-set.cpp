#include <iostream>
using namespace std;

int n, m;
int c, a, b;
int arr[100001];

void Union(int a, int b){
    arr[a] = b;
    return;
}

int Find(int a){
    if(arr[a] == a) return a;

    return arr[a] = Find(arr[a]);
}

int main() {
    
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;

    for(int i=0; i<=n; i++){
        arr[i] = i;
    }

    for(int i=0; i<m; i++){
        cin >> c >> a >> b;
        if(c==0){
            Union(a, b);
        }
        else{
            cout << (Find(a) == Find(b) ? 1 : 0) <<'\n';
        }
    }


    return 0;
}