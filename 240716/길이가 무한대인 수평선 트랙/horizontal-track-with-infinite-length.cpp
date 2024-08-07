#include <iostream>
#include <set>
using namespace std;

int N, T, a, b;
set<pair<int,int>> oset;
set<pair<int,int>>::iterator iter, copyIter, preIter, nextIter;

int time1, time2;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> T;

    for(int i=0; i<N; i++){
        cin >> a >> b;
        oset.insert(make_pair(a, b));
    }

    iter=oset.begin();
    while(iter != oset.end()){
        
        copyIter = iter;
        auto curPair = *(copyIter++);
        nextIter = copyIter--;
        preIter = --copyIter;

        time1 = preIter->second - curPair.second == 0 ? -1 : (curPair.first - preIter->first)/(preIter->second - curPair.second);
        time2 = curPair.second - nextIter->second == 0 ? -1 : (nextIter->first - curPair.first)/(curPair.second - nextIter->second);

        if(nextIter == oset.end() && iter == oset.begin()) break;
        else if(nextIter == oset.end()){        
            if(time1 > 0 &&  time1 <= T){
            oset.erase(*preIter);
            }
            else {
                iter++; continue;
            }
        }
        else if(iter == oset.begin()){

            if(time2 > 0 && time2 <= T){
            oset.erase(curPair);
            iter = nextIter;
            }
            else {
                iter++; continue;
            }
        }
        else{
            if(time1 > 0 &&  time1 <= T && time2 > 0 && time2 <= T){
                if(time1 < time2)
                    oset.erase(*preIter);
                else{
                    oset.erase(curPair);
                    iter = nextIter;
                }
            }
            else if(time1 > 0 &&  time1 <= T){
            oset.erase(*preIter);
            }
            else if(time2 > 0 && time2 <= T){
            oset.erase(curPair);
            iter = nextIter;
            }
            else{
                iter++; continue;
            }
        }

    }
    

    cout << oset.size();

    return 0;
}