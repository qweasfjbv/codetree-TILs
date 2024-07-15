#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> uset;
unordered_set<int> checkset;
vector<vector<int>> edges;

int n, g, m, t;

void BFS(int idx){

    cin.tie(0);
    ios::sync_with_stdio(0);

    // n보다 작은 노드 -> 큰 노드와 연결되어있음
    // 그냥 BFS 돌림 (중복 가능해야함)
    if(idx < n) {
        uset.insert(idx);
        for(int i=0; i<edges[idx].size(); i++){
            if(checkset.find(edges[idx][i]) != checkset.end()) continue;
            BFS(edges[idx][i]);
        }

        return;
    }

    // OFFSET보다 큰 노드 -> 작은 노드와 연결됨
    // 즉, 한 명 제외하고 전부 초대되어 있어야 다음 노드로 이동가능
    int cnt = 0;
    int nextIdx = -1;
    checkset.insert(idx);
    for(int i=0; i<edges[idx].size(); i++){
        if(edges[idx][i] >= n) continue;
        if(uset.find(edges[idx][i]) != uset.end()) cnt++;
        else nextIdx = edges[idx][i];

    }

    if(cnt == edges[idx].size()-1) BFS(nextIdx);

    checkset.erase(idx);
    return;
}

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> g;

    edges.resize(n + g + 1);

    for(int i=0; i<g; i++){
        cin >> m;
        for(int j=0; j<m; j++){
            cin >> t;
            
            edges[i+n].push_back(t-1);
            edges[t-1].push_back(i+n);
        }
    }

    BFS(0);

    cout << uset.size();
    
    return 0;
}