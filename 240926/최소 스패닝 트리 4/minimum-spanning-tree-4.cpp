#include <iostream>
#include <tuple>
#include <queue>
using namespace std;

int n, m, x, y, z;
char ch;
int arr[10001];
char nodes[10001];
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;


int Find(int a){
    if(arr[a] == a) return a;
    return arr[a] = Find(arr[a]);
}

void Union(int a, int b){
    a = Find(a);
    b = Find(b);
    arr[a] = b;
}

bool IsSet(int a, int b){
    return Find(a) == Find(b);
}

int main() {
    
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    
    for(int i=0; i<=n; i++){
        arr[i] = i;
    }

    for(int i=0; i<n; i++){
        cin >> nodes[i+1];
    }
    for(int i=0; i<m; i++){
        cin >> x >> y >> z;
        pq.push(make_tuple(z, x, y));
    }

    int src, dst;
    int sum = 0;
    int cnt =0;
    while(!pq.empty()){
        auto tp = pq.top(); pq.pop();
        src = get<1>(tp); dst = get<2>(tp);
        if(!IsSet(src, dst) && nodes[src] != nodes[dst]) {
            sum += get<0>(tp);
            cnt++;
            Union(src, dst);
        }
    }
    
    cout << (cnt==n-1 ? sum : -1);

    return 0;
}