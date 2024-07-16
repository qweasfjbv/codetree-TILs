#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

struct compare{
    bool operator ()(int& a, int& b){
        if(abs(a) > abs(b)) return true;

        if(abs(a) == abs(b) && a > b) return true;

        return false;
    }
};

int n, a;
priority_queue<int, vector<int>, compare> pq;


int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a!= 0){
            pq.push(a);
        }
        else{
            if(pq.empty()){ 
                cout << 0 << "\n";
            }
            else{
                cout << pq.top()<< '\n';
                pq.pop();
            }
        }
    }

    return 0;
}