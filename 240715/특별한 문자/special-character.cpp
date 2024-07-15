#include <iostream>
using namespace std;

string s;
char c = -1;
int a[26];

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    for(int i=0; i<26; i++) a[i] = 0;
    
    cin >> s;
    for(int i=s.length()-1; i>=0; i--){
        a[s[i]-'a']++;
        if(a[s[i]-'a'] == 1) c = s[i];
    }

    if(c == -1) cout << "None";
    else cout << c;
    return 0;
}