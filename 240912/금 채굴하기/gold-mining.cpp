#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

int n, m;
int arr[21][21];
bool checked[21][21];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int BFS(int x, int y){
    int _max = 0;
    int px, py;
    queue<pair<int,int>> q;
    q.push(make_pair(x, y));
    checked[x][y] = true;
    int cnt = q.size();
    int dis = 0;
        int golds =0;

    while(!q.empty())
    {
        cnt = q.size();
        for(int i=0; i<cnt; i++){
            auto pr = q.front(); q.pop();
            if(arr[pr.first][pr.second] == 1) {
                golds++;
            }

            for(int i=0; i<4; i++){
                px = pr.first + dx[i]; py = pr.second + dy[i];
                if(px < 0 || py < 0 || px >= n || py >= n) continue;
                if(checked[px][py]) continue;

                checked[px][py] = true;
                q.push(make_pair(px, py));
            }
        }

        if(golds * m - (dis*dis+(dis+1)*(dis+1)) >= 0) _max = max(_max, golds);
        dis++;
    }

    return _max;
}

void Init(){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            checked[i][j] =false;
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

Init();
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    int _max = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Init();
            _max = max(_max, BFS(i, j));
        }
    }

    cout << _max;

    return 0;
}