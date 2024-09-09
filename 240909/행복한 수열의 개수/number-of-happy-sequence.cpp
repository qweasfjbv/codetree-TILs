#include <iostream>
using namespace std;

int N, M;
int arr[101][101];
int cnt = 0;

void CheckVert(int n){
    int prevNum = -1;
    int seq = 0;
    for(int i=0; i<N; i++){
        if(prevNum == arr[i][n]){
            seq++;
        }
        else 
        {
            prevNum = arr[i][n];
            seq = 1;
        }

        if(seq == M) {
            cnt++; return;
        }
    }
}

void CheckHorz(int n){
    int prevNum = -1;
    int seq = 0;
    for(int i=0; i<N; i++){
        if(prevNum == arr[n][i]){
            seq++;
        }
        else 
        {prevNum = arr[n][i];
        seq = 1;
        }

        if(seq == M) {
            cnt++; return;
        }

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