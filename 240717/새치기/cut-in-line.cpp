#include <iostream>
#include <vector>
using namespace std;

int arr[100002][2];
int line[12];
int first[100002];
int n, m, q;
int com, a, b, c;

void func_2(int a){
    if(arr[a][0] != -1) arr[arr[a][0]][1] = arr[a][1];
    if(arr[a][1] != -1) arr[arr[a][1]][0] = arr[a][0];

    if(first[a] != -1){
        line[first[a]] = arr[a][1];
        if(arr[a][1] != 0) first[arr[a][1]] = first[a];
        first[a] = -1;
    }
}

void func_1(int a, int b){
    func_2(a);

    arr[a][0] = arr[b][0];
    arr[a][1] = b;
    if(arr[b][0] != -1) arr[arr[b][0]][1] = a;
    else {
        line[first[b]] = a;
        first[a] = first[b];
        first[b] = -1;
    }
    arr[b][0] = a;
}


void func_3(int a, int b, int c){
    if(arr[a][0] != -1) arr[arr[a][0]][1] = arr[b][1];
    if(arr[b][1] != -1) arr[arr[b][1]][0] = arr[a][0];


    if(first[a] != -1){
        line[first[a]] = arr[b][1];
        if(arr[b][1] != 0) first[arr[b][1]] = first[a];
        first[a] = -1;
    }

    
    arr[a][0] = arr[c][0];
    arr[b][1] = c;
    if(arr[c][0] != 0) arr[arr[c][0]][1] = a;
    else {
        line[first[c]] = a;
        first[a] = first[c];
        first[c] = -1;
    }
    arr[c][0] = b;
}

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m >> q;
    
    for(int i=0; i<=n; i++){
        arr[i][0] = arr[i][1] = -1;
        first[i] = -1;
    }

    int pre;
    for(int i=1; i<=m; i++){
        cin >> a;

        if(a == -1) continue;

        cin >> b;
        pre = b;
        arr[b][0] = -1;
        line[i] = b;
        first[b] = i;
        for(int j =1; j<a; j++){
            cin >> b;
            arr[b][0] = pre;
            arr[pre][1] = b;
            pre = b;
        }
        arr[pre][1] = -1;
    }   

    for(int i=0; i<q; i++){
        cin >> com;
        switch(com){
            case 1:
            cin >> a >> b;
            func_1(a, b);
            break;
            case 2:
            cin >> a;
            func_2(a);
            break;
            case 3:
            cin >> a >> b >> c;
            func_3(a, b, c);
            break;
        }
    } 

    for(int i=1; i<=m; i++){
        if(line[i] == -1){
            cout << -1 << '\n';
        }
        else{
            int cur = line[i];
            while(cur != -1){
                cout << cur << ' ';
                cur = arr[cur][1];
            }
            cout << '\n';
        }
    }


    return 0;
}