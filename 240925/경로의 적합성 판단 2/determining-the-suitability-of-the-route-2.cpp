#include <iostream>
using namespace std;

int n, m, k, x, y;
int arr[100002];
int seq[100002];


int Find(int a){
    

    if(arr[a] == a) return a;
    return arr[a] = Find(arr[a]);
}

void Union(int a, int b){
    a = Find(a);
    b = Find(b);

    arr[a] = b;
}


int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m >> k;
    
    for(int i=0;i<=n; i++){
        arr[i] = i;
    }
    for(int i=0; i<m; i++){
        cin >> x >> y;
        Union(x, y);
    }

    bool once = false;
    
    for(int i=0; i<k ;i++){
        cin >> seq[i];
    }   

    for(int i=1; i<k ;i++){
        if(Find(seq[i-1]) == Find(seq[i])) continue;

        once = true; break;
    }   

    cout << (!once ? 1 : 0);

    return 0;
}