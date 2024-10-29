#include <iostream>
#include <tuple>
#include <vector>
#include <cmath>
using namespace std;

int N;
tuple<int,int,int> L[100001];
tuple<int,int,int> R[100001];
vector<char> input;

int GetMax(int a){
    int u, v, w, x, y, z;
    
    tie(u,v,w) = L[a];
    tie(x,y,z) = R[a+1];

    return max(u, max(v, w)) + max(x, max(y, z));

}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

cin>>N;
char c;
    for(int i=0; i<N; i++){
        cin >>c;
        input.push_back(c);
    }

    L[0] = R[N-1] = make_tuple(0,0,0);
    for(int i=0; i<N; i++){
        L[i] = (i!= 0) ? L[i-1] : make_tuple(0,0,0);
        R[N-i-1] = (i!= 0) ? R[N-i] : make_tuple(0,0,0);
        switch(input[i]){
            case 'H':
            get<0>(L[i])++;
            get<0>(R[N-1-i])++;
            break;
            case 'S':
            get<1>(L[i])++;
            get<1>(R[N-1-i])++;
            break;
            case 'P':
            get<2>(L[i])++;
            get<2>(R[N-1-i])++;
            break;
        }
    }
    int _max = -1;
    for(int i=0; i<N-1; i++){
        _max = max(_max, GetMax(i));
    }
    cout << _max <<'\n';
    return 0;
}