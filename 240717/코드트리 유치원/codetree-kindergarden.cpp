#include <iostream>
using namespace std;

int q, a, b, com;
int curEnd = 2;
int arr[100002][2];

void func_1(int a, int b){
    int start = curEnd;
    
    for(int i=0; i<b-1; i++){
        arr[curEnd][0] = curEnd-1;
        arr[curEnd][1] = curEnd+1;
        curEnd++;
    }

    arr[start][0] = a;
    arr[a][1] = start;
    arr[curEnd][1] = -1;
    arr[curEnd][0] = curEnd-1;
    curEnd++;

}

void func_2(int a, int b){
    int start = curEnd;
    
    for(int i=0; i<b-1; i++){
        arr[curEnd][0] = curEnd-1;
        arr[curEnd][1] = curEnd+1;
        curEnd++;
    }

    arr[start][0] = arr[a][0];
    if(arr[a][0] != -1) arr[arr[a][0]][1] = start;
    arr[curEnd][1] = a;
    arr[curEnd][0] = curEnd-1;
    arr[a][0] = curEnd;
    curEnd++;
    
}

void func_3(int a){
    if(arr[a][0] == -1 || arr[a][1] == -1){
        cout << -1 << '\n';
        return;
    }

    cout << arr[a][0] << ' ' << arr[a][1] << '\n';
}

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    for(int i=0; i<=100002; i++){
        arr[i][0] = arr[i][1] = -1;
    }

    cin >> q;
    for(int i=0; i<q; i++){
        cin >> com;
        switch(com){
            case 1:
                cin >> a >> b;
                func_1(a, b);
            break;
            case 2:
                cin >> a >> b;
                func_2(a, b);
            break;
            case 3:
                cin >> a;
                func_3(a);
            break;
        }
    }
    return 0;
}