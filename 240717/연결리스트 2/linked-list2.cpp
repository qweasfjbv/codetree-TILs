#include <iostream>
using namespace std;

int N, Q;
int a, b, com, pre, nnext;
int arr[100001][2];

void func1(int i){
    arr[arr[i][0]][1] = arr[i][1];
    arr[arr[i][1]][0] = arr[i][0];
    arr[i][0] = arr[i][1] = -1;
}

void func2(int i, int j){
    pre = arr[i][0];

    if(pre != -1) arr[pre][1] = j;

    arr[i][0] = j;
    arr[j][0] = pre; arr[j][1] = i;
}

void func3(int i, int j) {
    nnext = arr[i][1];

    if(nnext != -1) arr[nnext][0] = j;
    arr[i][1] = j;
    arr[j][0] = i; arr[j][1] = nnext;
}

void func4(int i){
    if(arr[i][0] == -1) cout << 0 << ' ';
    else cout << arr[i][0] << ' ';

    if(arr[i][1] == -1) cout << 0 << '\n';
    else cout << arr[i][1] << '\n';
}

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> Q;
    for(int i=0; i<=N; i++){
        arr[i][0] = arr[i][1] = -1;
    }

    for(int i=0; i<Q; i++){
        cin >> com;
        switch(com){
            case 1:
                cin >> a;
                func1(a);
                break;
            case 2:
                cin >> a >> b;
                func2(a, b);
                break;
            case 3:
                cin >> a >> b;
                func3(a, b);
                break;
            case 4:
                cin >> a;
                func4(a);
                break;
        }
    }

    for(int i=1; i<=N; i++){
        if(arr[i][1] == -1) cout << 0 << ' ';
        else cout << arr[i][1] << ' ';
    }

    return 0;
}