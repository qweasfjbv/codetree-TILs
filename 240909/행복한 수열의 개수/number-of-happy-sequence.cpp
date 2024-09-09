#include <iostream>
using namespace std;

int N, M;
int arr[101][101];
int cnt = 0;

void CheckVert(int n){
    int prevNum = -1;
    for(int i=0; i<N; i++){
        if(prevNum == arr[i][n]){
            cnt++; return;
        }
        else prevNum = arr[i][n];
    }
}

void CheckHorz(int n){
    int prevNum = -1;
    for(int i=0; i<N; i++){
        if(prevNum == arr[n][i]){
            cnt++; return;
        }
        else prevNum = arr[n][i];
    }

}

int main() {

    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<N; i++){
        CheckVert(i);
        CheckHorz(i);
    }

    cout << cnt;
    
    return 0;
}