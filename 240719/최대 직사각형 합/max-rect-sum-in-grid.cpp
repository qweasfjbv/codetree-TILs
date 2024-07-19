#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 300

int n, t;
int psum[MAX_N+1][MAX_N+1];
int dp[MAX_N+1];

int GetSum(int x1, int y1, int x2, int y2){
    return psum[x2][y2] + psum[x1][y1] - psum[x1][y2] - psum[x2][y1];
}

int GetRectSum(int x1, int x2){
    dp[0] = 0;
    int _max = -1000 * 300 * 1000;
    for(int i=1; i<=n; i++){
        int s= GetSum(x1-1, i-1, x2, i);
        dp[i] =max(dp[i-1] +  s, s);
        _max = max(_max, dp[i]);
    }

    return _max;
}



int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<=n; i++){
        psum[i][0] = psum[0][i] = 0;
    }

    // prefix sum 계산
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> t;
            psum[i][j] = t - psum[i-1][j-1] + psum[i-1][j] +psum[i][j-1];
        }
    }

    int _max = -300 * 1000 * 1000;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            _max = max(_max, GetRectSum(i, j));
        }
    }

    cout << _max;
    
    return 0;
}