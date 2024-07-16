#include <iostream>
#include <queue>
#include <cmath>
using namespace std;


struct compare{
    int sum1, sum2;
    bool operator()(pair<int,int> a, pair<int,int> b){
        sum1 = abs(a.first) + abs(a.second); sum2 = abs(b.first) + abs(b.second);
        if(sum1 != sum2) return sum1 > sum2;
        else return a.first > b.first || (a.first == b.first && a.second > b.second);
    }
};

int n, m, a, b;
priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        pq.push(make_pair(a, b));
    }

    for(int i=0; i<m; i++){
        auto t = pq.top();
        pq.pop();
        t.first += 2; t.second +=2 ;
        pq.push(t);
    }

    cout << pq.top().first << ' ' << pq.top().second;

    return 0;
}