#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a>> b>> c;
    cout << max(a, max(b, c));
    return 0;
}