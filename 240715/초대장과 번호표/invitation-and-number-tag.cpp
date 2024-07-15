#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> uset;
unordered_set<int> checkset;
vector<vector<int>> edges;

int n, g, m, t;

void BFS(){

    cin.tie(0);
    ios::sync_with_stdio(0);
    
    while(!uset.empty()){

        int visit = *uset.begin(); uset.erase(visit);
        if(visit < n) checkset.insert(visit);

        if(visit < n) {
            for(int i=0; i<edges[visit].size(); i++){
                uset.insert(edges[visit][i]);
            }
        }
        else{
            int cnt = 0;int nextIdx = -1;
            for(int i=0; i<edges[visit].size(); i++){
                if(edges[visit][i] >= n) continue;
                if(checkset.find(edges[visit][i]) != uset.end()) cnt++;
                else nextIdx = edges[visit][i];
            }

            if(cnt == edges[visit].size()-1) uset.insert(nextIdx);
        }

    }

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

    uset.insert(0);
    BFS();

    cout << checkset.size();
    
    return 0;
}