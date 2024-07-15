#include <iostream>
using namespace std;

string s;
int a[26];

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    for(int i=0; i<26; i++) a[i] = 0;
    
    cin >> s;
    for(int i=s.length()-1; i>=0; i--){
        a[s[i]-'a']++;
    }

    for(int i=0; i<s.length(); i++){
        if(a[s[i]-'a'] == 1) {
            cout << s[i]; return 0;
        }
    }

    cout << "None" ;
    return 0;
}