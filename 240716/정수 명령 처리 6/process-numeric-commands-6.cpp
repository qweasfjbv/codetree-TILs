#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, a;
string s;
priority_queue<int> pq;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s.compare("push") == 0){
            cin >> a;
            pq.push(a);
        }
        else if(s.compare("pop") == 0){
            cout << pq.top() << '\n';
            pq.pop();
        }
        else if(s.compare("size") == 0){
            cout << pq.size() << '\n';
        }
        else if(s.compare("empty") == 0){
            if(pq.empty()){
                cout << 1 << '\n';
            }
            else cout << 0 << '\n';
        }
        else{   // top
            cout << pq.top() << '\n';
        }
    }

    return 0;
}