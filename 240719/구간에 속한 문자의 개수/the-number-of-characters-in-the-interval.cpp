#include <iostream>
#include <string>
using namespace std;

int n, m, k;
string s;
int arr[1001][1001][3];

void pprint(int a, int b, int c, int d){
    for(int i=0; i<3; i++){
        cout << arr[c][d][i] - arr[a-1][d][i] - arr[c][b-1][i] + arr[a-1][b-1][i] << ' ';
    }
    cout << '\n';
}

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m >> k;

    for(int i=0; i<=1000; i++){
        for(int j =0; j<3; j++){
            arr[i][0][j] = arr[0][i][j] = 0;
        }
    }
    
    for(int i=1; i<=n; i++){
        cin >> s;
        for(int j=1; j<=m; j++){
            for(int m = 0; m<3; m++){
                arr[i][j][m] = arr[i-1][j][m] + arr[i][j-1][m] - arr[i-1][j-1][m] + (s[j-1]-'a'==m ? 1 : 0);
            }
        }
    }

    int a, b, c, d;
    for(int i=0; i<k; i++){
        cin >>a>>b>>c>>d;
        pprint(a, b, c, d);
    }


    return 0;
}