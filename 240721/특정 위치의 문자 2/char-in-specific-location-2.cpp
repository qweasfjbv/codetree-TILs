#include <iostream>
using namespace std;

int main() {
    char c;
    for(int i=1; i<10; i++){
        cin >> c;
        if(i==2 || i==5 || i==8){
            cout << c << ' ';
        }
    }
    return 0;
}