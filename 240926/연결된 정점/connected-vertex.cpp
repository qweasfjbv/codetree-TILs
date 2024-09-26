#include <iostream>
using namespace std;

int arr[100001];
int sum[100001];
int a, b, n, m;
char c;

int Find(int a){
    if(arr[a] == a) return a;
    return arr[a] = Find(arr[a]);
}

void Union(int a, int b){
    a = Find(a);
    b = Find(b);
    arr[a] = b;
    sum[b] += sum[a];
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<=n; i++) 
    {
        arr[i] = i;
        sum[i] = 1;
    }

    for(int i=0; i<m; i++){
        cin >> c;
        if(c == 'x'){
            cin >> a >> b;
            Union(a, b);
        }
        else{
            cin >> a;
            cout << sum[Find(a)] << '\n';
        }
    }

    return 0;
}