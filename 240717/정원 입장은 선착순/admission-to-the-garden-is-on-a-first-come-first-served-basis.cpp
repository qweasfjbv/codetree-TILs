#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int n, a, b;
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
set<tuple<int,int,int>> oset;
tuple<int,int,int> tp, tp1;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        oset.insert(make_tuple(a, i+1, b));
    }
    
    int rem = get<0>(*oset.begin());
    while(!oset.empty()){
        tp = *oset.begin(); 
        if(get<0>(tp) != rem) break;

        oset.erase(tp);
        pq.push(make_tuple(get<1>(tp), get<0>(tp), get<2>(tp)));
    }

    int pre = 0;
    int _max = -1;
    while(!pq.empty()){
        tp1 = pq.top(); pq.pop();
        if(pre <= get<1>(tp1)){
            pre = get<1>(tp1) + get<2>(tp1);
        }
        else 
        {
            _max = max(_max, pre - get<1>(tp1));
            pre = pre + get<2>(tp1); 
        }

        if(pq.empty() && pre < get<0>(*oset.begin())){
            rem = get<0>(*oset.begin());
            while(!oset.empty()){
                tp = *oset.begin(); 

                if(get<0>(tp) != rem) break;

                oset.erase(tp);
                pq.push(make_tuple(get<1>(tp), get<0>(tp), get<2>(tp)));
            }
        }
        else{
            while(!oset.empty()){
                tp = *oset.begin();
                if(pre < get<0>(tp)) break;

                oset.erase(tp);
                pq.push(make_tuple(get<1>(tp), get<0>(tp), get<2>(tp)));
            }
        }
        
    }
    
    cout << _max;
    return 0;
}