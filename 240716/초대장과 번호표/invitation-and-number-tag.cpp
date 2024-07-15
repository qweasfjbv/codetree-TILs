#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int n, g, m, t;
vector<unordered_set<int>> group;
vector<unordered_set<int>> people;
unordered_set<int> q;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> g;
    people.resize(g);
    group.resize(n);
    for(int i=0; i<g; i++){
        cin >> m;
        for(int j=0; j<m; j++){
            cin >> t;
            people[i].insert(t-1);
            group[t-1].insert(i);
        }
    }

    int ans = 0;
    q.insert(0);
    while(!q.empty()){
        int v = *q.begin(); q.erase(v);
        ans++;

        for(auto k : group[v]){
               people[k].erase(v);
               if(people[k].size() == 1){
                    int v2 = *people[k].begin(); people[k].erase(v2);
                    group[v2].erase(k);
                    q.insert(v2);
               }
        }
    }
    
    cout << ans;

    return 0;
}