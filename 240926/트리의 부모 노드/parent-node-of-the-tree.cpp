#include <iostream>
#include <vector>
using namespace std;

int n, a, b;
vector<vector<int>> edges;
int parent[100001];
bool visited[100001];

void DFS(int par, int cur){
    visited[cur] = true;
    if(par==cur) parent[cur] = cur;
    else parent[cur] = par;

    for(int i=0; i<edges[cur].size(); i++){
        if(visited[edges[cur][i]]) continue;
        DFS(cur, edges[cur][i]);
    }
    return;
}

int main(){

    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    edges.resize(n+1);
    for(int i=0; i<=n; i++){
        visited[i] = false;
        parent[i] = i;
    }
    for(int i=0; i<n-1; i++){
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    DFS(1, 1);

    for(int i =1; i<n; i++){
        cout << parent[i+1] << '\n';
    }
    return 0;
}