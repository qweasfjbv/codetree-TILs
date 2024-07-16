#include <iostream>
using namespace std;

int N, Q;
int a, b, c, d;
int arr[250001][2];

int a1, b1, c1, d1;


int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> Q;
    for(int i=0;i<=N; i++){
        arr[i][0] = i-1;
        arr[i][1] = i+1;
    }
    int swp;

    for(int i=0; i<Q; i++){
        cin >> a >> b >> c >> d;
        
        if(arr[b][1] == c){
            a1 = arr[a][0]; b1 = a;
            c1 = d; d1 = arr[d][1];
        }
        else if(arr[d][1] == a){
            c1 = arr[c][0]; d1 = c;
            a1 = b; b1 = arr[b][1];
        }
        else{
            a1 = arr[a][0]; b1 = arr[b][1];
            c1 = arr[c][0]; d1 = arr[d][1];
        }
        
        arr[a1][1] = c;
        arr[c1][1] = a;
        arr[b1][0] = d;
        arr[d1][0] = b;
        arr[c][0] = a1;
        arr[a][0] = c1;
        arr[d][1] = b1;
        arr[b][1] = d1;
    }

    int idx = 0;
    while(arr[idx][1] != N+1){
        idx = arr[idx][1];
        cout << idx << ' ';
    }

    return 0;
}