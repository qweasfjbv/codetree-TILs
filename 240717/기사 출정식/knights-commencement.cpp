#include <iostream>
using namespace std;

int n, m, a;
int arr[100002][2];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >>n >> m;
    
    for(int i=0; i<=n+1; i++){
        arr[i][0] = arr[i][1] = -1;
    }


    int pre = 0;
    for(int i=1; i<=n; i++){
        cin >> a;
        
        arr[pre][1] = a;
        arr[a][0] = pre;
        pre = a;
    }

    arr[n][1] = 1;
    arr[1][0] = n;



    for(int i=0; i<m; i++){
        cin >> a;

        arr[arr[a][0]][1] = arr[a][1];
        arr[arr[a][1]][0] = arr[a][0];

        cout << arr[a][1] << ' ' << arr[a][0] << '\n';
    }
    
    return 0;
}