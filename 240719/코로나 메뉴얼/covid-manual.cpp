#include <iostream>
using namespace std;

int main() {
    char c;
    int a;
    int cnt = 0;
    for(int i=0; i<3; i++){
        cin >> c>> a;
        if(c=='Y'){
            if(a>=37){
                cnt++;
            }
        }
    }
    cout << (cnt>=2 ? "E" : "N");
    return 0;
}