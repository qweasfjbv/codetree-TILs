#include <iostream>
#include <vector>
using namespace std;

vector<int> v1;
vector<int> v2;


int main() {
    
    int n1, n2;
    cin >>n1 >> n2;
    int a;
    for(int i=0; i<n1; i++){
        cin >> a;
        v1.push_back(a);
    }

    for(int i=0; i<n2; i++){
        cin >> a;
        v2.push_back(a);
    }

    for(int i=0; i<=v1.size()-v2.size(); i++){
        bool once = false;
        for(int j=0; j<v2.size(); j++){
            if(v1[i+j] != v2[j]) {
                once = true; break;
            }
        }

        if(!once) {
            cout << "Yes"; return 0;
        }
    }

    cout << "No";

    return 0;
}