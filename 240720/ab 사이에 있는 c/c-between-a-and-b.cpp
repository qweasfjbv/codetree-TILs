#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a>> b >> c;
    bool once = false;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            once= true; break;
        }
    }

    if(once)cout << "YES";
    else cout << "NO";
    return 0;
}