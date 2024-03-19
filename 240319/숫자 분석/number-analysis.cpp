#include <iostream>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int sum =0;
    for(int i=s.length()-1; i>=0; i--) {
        sum += s[i]-'0';
        cout << s[i];
    }
    cout << ' ' << sum;



    return 0;
}