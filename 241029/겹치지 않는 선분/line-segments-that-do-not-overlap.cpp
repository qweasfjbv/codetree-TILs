#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
vector<pair<int,int>> lines;
int L[100001];
int R[100001];
int x,y;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x>>y;
        lines.push_back(make_pair(x,y));
    }
    sort(lines.begin(), lines.end());
    for(int i=0; i<N; i++){
        L[i] = (i!=0)?max(L[i-1], lines[i].second) : lines[0].second;
        R[N-i-1] = (i!=0)?min(R[N-i], lines[N-i-1].second) : lines[N-1].second;
    }

    int cnt = 0;
    for(int i=0; i<N; i++){
        int left = (i==0)?-1000001:L[i-1];
        int right = (i==N-1) ? 1000001:R[i+1];

        if(left >= lines[i].second || right <= lines[i].second){
            continue;
        }
        cnt++;

    }
    cout << cnt;
    return 0;
}