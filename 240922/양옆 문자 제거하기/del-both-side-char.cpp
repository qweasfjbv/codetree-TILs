#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(i==1 || i==s.size()-2) continue;
        cout << s[i];
    }

    return 0;
}