#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int n, m;
string s;
unordered_set<string> uset;


vector<string> v1;
vector<string> v2;

int main() {

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> s;
        v1.push_back(s);
    }
    for(int i=0; i<n; i++){
        cin >> s;
        v2.push_back(s);
    }

    s = "   ";
    int count = 0;
    bool once = false;
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            for(int k =j+1; k<m; k++){
                uset.clear();
                once = false;
                for(int t=0; t<n; t++){
                    s[0] = v1[t][i];
                    s[1] = v1[t][j];
                    s[2] = v1[t][k];
                    uset.insert(s); 
                }

                for(int t=0; t<n; t++){
                    
                    s[0] = v2[t][i];
                    s[1] = v2[t][j];
                    s[2] = v2[t][k];
                    if(uset.find(s) != uset.end()){
                        once = true; break;
                    }
                }

                if(!once) count++;

            }
        }
    }

    cout << count;
    return 0;
}