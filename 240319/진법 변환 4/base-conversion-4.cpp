#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string s;
    cin >> s;

    int sum =0;
    for(int i=0; i< s.length(); i++){
        if(s[s.length() - i -1] == '1'){
            sum += pow(2, i);
        }
    }
    cout << sum;

    return 0;
}