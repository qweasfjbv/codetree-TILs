#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int ans;

    cin >> a>> b >>  c;

    ans = (a>b) ? a : b;
    ans = (ans>c)? ans : c;

    cout << ans;
    return 0;
}