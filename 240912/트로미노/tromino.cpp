#include <iostream>
#include <cmath>
using namespace std;

int mask[6][3][3] = {
    {
        {1, 1, 1},
        {0,0,0},
        {0,0,0}
    },
    {
        {1,0,0},
        {1,0,0},
        {1,0,0}
    },{
        {1,0,0},
        {1,1,0},
        {0,0,0}
    },{
        {1,1,0},
        {0,1,0},
        {0,0,0}
    },{
        {1,1,0},
        {1,0,0},
        {0,0,0}
    },{
        {0,1,0},
        {1,1,0},
        {0,0,0}
    },
};

int n, m;
int arr[201][201];

int Calc(int x, int y, int t){
    int sum =0; 
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(mask[t][i][j] ==1 && ((x+i)>=n || (y+j)>=m)) {
                    return 0;}
                if(mask[t][i][j] != 0){
                    sum += arr[x+i][y+j];
                }
            }
        }
        
        return sum;
}

int Check(int x, int y){
    int _max = -1;
    for(int t=0; t<6; t++){
       _max= max(_max, Calc(x, y, t));
    }

return _max;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    int _max = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0;j<m ;j++){
            _max = max(_max, Check(i, j));
        }
    }

cout << _max;
    return 0;
}