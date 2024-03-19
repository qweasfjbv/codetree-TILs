#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main() {

string s;
cin >> s;
string s1, s2;
int idx;
for(int i=0; i<s.length(); i++){
    if(s[i] == '.'){
        idx = i; break;
    }
}

s1 = s.substr(0, idx);
int i1 =0;
int i2 = 0;
s2 = s.substr(idx+1, s.length());
int si =s2.length();


for(int i=0; i<s1.length(); i++){
    i1 += (s1[i]-'0') * pow(10, s1.length() - i - 1);
}
for(int i=0; i<s2.length(); i++){
    i2 += (s2[i]-'0') * pow(10, s2.length() - i - 1);
}

vector<int> inte;

while(i1 != 0){
    inte.push_back(i1%2);
    i1 = i1/2;
    
}
for(int i=0; i<inte.size(); i++){
    cout << inte[inte.size() - i - 1];
}
cout << '.';


    int tmp = pow(10, si);
for(int i=0; i<4; i++){
    i2 = i2 * 2;
    if(i2 / tmp== 1) {
        i2 = i2 % tmp;
        cout << '1';}
    else cout << '0';
}


    return 0;
}