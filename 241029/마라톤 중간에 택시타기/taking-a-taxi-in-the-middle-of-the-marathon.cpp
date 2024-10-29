#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N, x, y;
vector<pair<int,int>> points;
int L[100001];
int R[100001];

int Distance(int a, int b){
    return abs(points[a].first - points[b].first) + abs(points[a].second - points[b].second);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }

    L[0] = R[N-1] = 0;
    for(int i=1; i<N; i++){
        L[i] = L[i-1] + Distance(i, i-1);
        R[N-1-i] = R[N-i] + Distance(N-i-1, N-i);
    }
    int _min = 1e9;
    for(int i=1; i<N-1; i++){
        _min =min(_min, L[i-1] + R[i+1] + Distance(i-1, i+1));
    }

    cout << _min << '\n';

    return 0;
}