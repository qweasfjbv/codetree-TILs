#include <iostream>
#include <set>
using namespace std;

int N, T, a, b;
set<pair<int,int>> oset;
set<pair<int,int>>::iterator iter, copyIter, preIter, nextIter;

float time1, time2;

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
       // cout << iter->first << ", " << iter->second << endl;
        copyIter = iter;
        auto curPair = *(copyIter++);
        nextIter = copyIter--;
        preIter = --copyIter;

        if(nextIter == oset.end() && iter == oset.begin()) break;
        else if(nextIter == oset.end()){
            time1 = (preIter->second - curPair.second)/ (curPair.first - preIter->first);
            if(time1 > 0 &&  time1 <= T){
            oset.erase(*preIter);
            }
            else {
                iter++; continue;
            }
        }
        else if(iter == oset.begin()){
            time2 = (curPair.second - nextIter->second)/(nextIter->first - curPair.first);
            if(time2 > 0 && time2 <= T){
            oset.erase(curPair);
            iter = nextIter;
            }
            else {
                iter++; continue;
            }
        }
        else{
            
            time1 = (float)(preIter->second - curPair.second)/ (curPair.first - preIter->first);
            time2 = (float)(curPair.second - nextIter->second)/(nextIter->first - curPair.first);


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