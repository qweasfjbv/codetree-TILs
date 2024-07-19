#include <iostream>
using namespace std;

int main() {
    bool once = false;
    int n;
    for(int i=0; i<5; i++){
        cin >> n;
        if(n%3!=0) once = true;
    }
    if(once) cout << 0;
    else cout << 1;
    return 0;
}