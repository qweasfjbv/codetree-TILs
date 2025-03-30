#include <iostream>
#include <algorithm>

using namespace std;

int n;
int grid[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            int up = (i==0)?0 : grid[i-1][j];
            int left = (j==0)?0 : grid[i][j-1];
            grid[i][j] += max(up, left);
        }
    }

    cout << grid[n-1][n-1];
    // Please write your code here.

    return 0;
}
