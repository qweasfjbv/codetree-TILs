#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m;
int a, b, c;
int arr[10001];
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;

int Find(int a){
    if(arr[a] == a) return a;
    return arr[a] = Find(arr[a]);
}

void Union(int a, int b){
    a = Find(a);
    b= Find(b);
    arr[a] =b;
}

bool IsSet(int a, int b){
    return Find(a) == Find(b);
}
int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;

    for(int i=1; i<=n; i++){
        arr[i] = i;
    }
    for(int i=0; i<m; i++){
        cin >> a>> b >> c;
        pq.push(make_tuple(c, a, b));
    }

    int sum =0;

    while(!pq.empty()){
        auto tp = pq.top(); pq.pop();
        if(IsSet(get<1>(tp), get<2>(tp))) continue;
        Union(get<1>(tp), get<2>(tp));
        sum += get<0>(tp);
    }

    cout << sum;


    return 0;
}