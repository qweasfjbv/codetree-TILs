#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string s;
    cin >> s;

    int sum =0;
    for(int i=s.length()-1; i>=0; i--){
        if(s[i] == '1'){
            sum += pow(2, i);
        }
    }
    cout << sum;

    return 0;
}