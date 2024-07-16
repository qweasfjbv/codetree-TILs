#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

int n, a, b;
int _max = 0;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
set<pair<int,int>> oset;


int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        oset.insert(make_pair(a, b));
    }

    int pre = 0;

    auto pr = *oset.begin(); oset.erase(pr);
    pq.push(make_pair(pr.second, pr.first));

    while(!pq.empty()){
        auto p = pq.top(); pq.pop();

        if(pre > p.second){
            _max = max(_max, pre-p.second);
            pre = pre + p.first;
        }
        else pre = p.first + p.second;

        while(!oset.empty()){
            pr = *oset.begin();

            if(pq.empty() && pr.first > pre){
                pq.push(make_pair(pr.second, pr.first));
                oset.erase(pr);
                break;
            } 

            if(pr.first <= pre) {
                pq.push(make_pair(pr.second, pr.first));
                oset.erase(pr);
            }
            else break;
            
        }

    }

    cout << _max;

    
    return 0;
}