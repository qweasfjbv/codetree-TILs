#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int T, m, a, b;
int mid;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> T;
    for(int t = 0; t<T; t++){
        cin>> m;
        priority_queue<int> lpq;
        priority_queue<int, vector<int>, greater<int>>  rpq;
        cin >> a;
        mid = a;
        cout << a<< ' ';

        for(int i=1; i<m; i+=2){
            cin >> a; cin >> b;

            if(a>=mid && b>=mid){
                    lpq.push(mid);
                    rpq.push(a);
                    rpq.push(b);
                    mid = rpq.top(); rpq.pop();
            }
            else if((a>=mid && b<=mid) || (a<=mid && b>=mid)){

                if(a<b){
                    lpq.push(a);
                    rpq.push(b);
                }
                else{
                    lpq.push(b);
                    rpq.push(a);
                }
            }
            else if(a<=mid && b<=mid){
                rpq.push(mid);
                lpq.push(a);
                lpq.push(b);
                mid = lpq.top(); lpq.pop();
            }
            
            cout << mid << ' ';
        }
        cout << '\n';
    }


    return 0;
}