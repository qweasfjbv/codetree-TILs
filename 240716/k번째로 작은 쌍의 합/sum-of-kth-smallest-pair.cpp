#include <iostream>
#include <queue>
#include <set>
#include <vector>
using namespace std;

int n, m, k, t;
priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
int arr[100001];
set<int> oset;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i =0; i<m; i++){
        cin >> t;
        oset.insert(t);
    }

    for(int i=0; i<n; i++){
        pq.push(make_pair(arr[i]+ *oset.begin(), i));
    }

    for(int i=0; i<k-1; i++){
        auto tp = pq.top(); pq.pop();
        auto iter = oset.upper_bound(tp.first - arr[tp.second]);
        if(iter == oset.end()) continue;

        pq.push(make_pair(arr[tp.second] + *iter, tp.second));
    }

    cout << pq.top().first;


    return 0;
}